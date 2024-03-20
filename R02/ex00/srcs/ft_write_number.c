/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:03:38 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/20 19:34:59 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_num_w(t_list *begin_dic, int nbr, int is_power, int *count)
{
	char	*num;
	t_list	*value;

	if (is_power == 1)
		num = ft_itoa_power(nbr);
	else
		num = ft_itoa(nbr);
	value = ft_list_find(begin_dic, num, &ft_strcmp);
	if (!value)
	{
		write(ER, "\nDict Error", 11);
		return ;
	}
	if (*count < 0)
	{
		write(1, ",", 1);
		*count *= -1;
	}
	if (*count != 0)
		write(1, " ", 1);
	ft_putstr((char *)value->data_w);
	*count += 1;
	if (is_power == 1)
		*count *= -1;
	free(num);
}

void	ft_print_3_digit(t_list *begin_dic, char *num, int *count)
{
	int	nbr;

	nbr = ft_atoi(num);
	if (nbr >= 100)
	{
		ft_print_num_w(begin_dic, (nbr / 100), 0, count);
		ft_print_num_w(begin_dic, 100, 0, count);
		nbr %= 100;
		if (nbr != 0)
			write(1, " and", 4);
	}
	if (nbr >= 20)
	{
		ft_print_num_w(begin_dic, ((nbr / 10) * 10), 0, count);
		nbr %= 10;
		if (nbr != 0)
			write(1, " -", 2);
	}
	if (nbr > 0)
		ft_print_num_w(begin_dic, nbr, 0, count);
}

void	ft_make_cpy_dgt(t_list *begin_dic, char *buff, int dgt, int *count)
{
	int		len;
	int		i;
	char	*temp;

	len = dgt + 1;
	i = -1;
	temp = (char *)malloc((len + 1) * sizeof(char));
	if (!temp)
		return ;
	while (++i < len)
		temp[i] = buff[i];
	temp[i] = '\0';
	ft_print_3_digit(begin_dic, temp, count);
	free(temp);
}

void	ft_iterate_3_digit(char *buff, t_list *begin_dic, int start, int *count)
{
	int		dgt;
	int		j;
	char	*temp;

	dgt = ft_strlen(buff) - (start + 1);
	temp = (char *)malloc((3 + 1) * sizeof(char));
	if (!temp)
		return ;
	while (buff[++start])
	{
		j = -1;
		while (++j < 3)
			temp[j] = buff[j + start];
		temp[j] = '\0';
		dgt -= 3;
		if (ft_strcmp(temp, "000") != 0)
		{
			ft_print_3_digit(begin_dic, temp, count);
			if (dgt > 0)
				ft_print_num_w(begin_dic, dgt, 1, count);
		}
		start += 2;
	}
	free(temp);
}

void	ft_write_number(char *buff, t_list *begin_dic)
{
	int	dgt;
	int	i;
	int	count;

	count = 0;
	if (ft_strcmp(buff, "0") == 0)
	{
		ft_print_num_w(begin_dic, 0, 0, &count);
		return ;
	}
	dgt = ft_strlen(buff);
	i = (dgt % 3) - 1;
	if ((dgt % 3) != 0)
	{
		ft_make_cpy_dgt(begin_dic, buff, i, &count);
		dgt -= (dgt % 3);
		if (dgt > 0)
			ft_print_num_w(begin_dic, dgt, 1, &count);
	}
	ft_iterate_3_digit(buff, begin_dic, i, &count);
}

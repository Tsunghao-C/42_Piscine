/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_reference_dic.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:49:06 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/20 19:33:44 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_parce_to_list(t_list **begin_list, char *buff)
{
	int	i;
	int	tag;

	i = 0;
	tag = -1;
	while (buff[i])
	{
		if (buff[i] == '\n')
		{
			if (*begin_list == NULL)
				*begin_list = ft_create_elem(buff, tag + 1, i);
			else
				ft_list_push_back(begin_list, buff, tag + 1, i);
			tag = i;
		}
		i++;
	}
	return ;
}

void	ft_read_n_parce(int fd, t_list **begin_dic)
{
	int		nu_rd;
	char	buff[BUFF];

	nu_rd = 1;
	ft_clear_buff(buff);
	while (nu_rd > 0)
	{
		nu_rd = read(fd, buff, sizeof(buff));
		if (nu_rd == -1)
			return ;
		ft_parce_to_list(begin_dic, buff);
	}
	ft_clear_buff(buff);
	return ;
}

t_list	*ft_set_reference_dic(int ac, char *av[])
{
	t_list	*begin_dic;
	int		fd;

	begin_dic = NULL;
	if (ac == 3)
		fd = open(av[1], O_RDONLY);
	else
		fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (NULL);
	ft_read_n_parce(fd, &begin_dic);
	if (!begin_dic)
		return (NULL);
	close(fd);
	return (begin_dic);
}

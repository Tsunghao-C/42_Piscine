/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:40:24 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/28 19:11:22 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h" 

void	ft_print_hex_ad(int *wc, int fd_out)
{
	int		i;
	int		ad;
	char	temp[(AD_SIZE + 1)];

	i = 0;
	ad = *wc;
	temp[0] = '\0';
	while (i < AD_SIZE)
	{
		temp[i] = HEX_TAB[ad % HEX_SIZE];
		ad /= HEX_SIZE;
		i++;
	}
	temp[i] = '\0';
	while (--i >= 0)
		write(fd_out, &temp[i], 1);
}

void	ft_put_hex(unsigned char *str, unsigned int size, int fd_out)
{
	unsigned int	i;

	i = 0;
	write(fd_out, "  ", 2);
	while (i < HEX_SIZE)
	{
		if (i < size)
		{
			write(fd_out, &HEX_TAB[str[i] / HEX_SIZE], 1);
			write(fd_out, &HEX_TAB[str[i] % HEX_SIZE], 1);
			write(fd_out, " ", 1);
		}
		else
			write(fd_out, "   ", 3);
		if (i == 7 || i == 15)
			write(fd_out, " ", 1);
		i++;
	}
}

void	ft_putstr_np(unsigned char *str, unsigned int size, int fd_out)
{
	unsigned int	i;

	i = 0;
	write(fd_out, "|", 1);
	while (i < HEX_SIZE)
	{
		if (i < size)
		{
			if (str[i] >= 32 && str[i] <= 126)
				write(fd_out, &str[i], 1);
			else
				write(fd_out, ".", 1);
		}
		else
			break ;
		i++;
	}
	write(fd_out, "|", 1);
}

void	*ft_print_memory(void *addr, unsigned int size, int fd_out, int *wc)
{
	ft_print_hex_ad(wc, fd_out);
	ft_put_hex((unsigned char *)(addr), size, fd_out);
	ft_putstr_np((unsigned char *)(addr), size, fd_out);
	write(fd_out, "\n", 1);
	*wc += size;
	return (NULL);
}

void	ft_print_last_mem(char *buff, int fd_out, int *wc)
{
	int	buff_len;

	buff_len = ft_strlen(buff);
	ft_print_memory(buff, buff_len, fd_out, wc);
	ft_print_hex_ad(wc, fd_out);
	write(fd_out, "\n", 1);
}

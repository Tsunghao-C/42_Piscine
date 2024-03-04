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

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define HEX_TAB "0123456789abcdef"
#define HEX_SIZE 16

void	ft_print_hex_ad(unsigned long ad)
{
	int		i;
	char	temp[(HEX_SIZE + 1)];

	i = 0;
	temp[0] = '\0';
	while (i < HEX_SIZE)
	{
		temp[i] = HEX_TAB[ad % HEX_SIZE];
		ad /= HEX_SIZE;
		i++;
	}
	temp[i] = '\0';
	while (--i >= 0)
		write(1, &temp[i], 1);
	write(1, ": ", 2);
}

void	ft_put_hex(unsigned char *str, int index, int size)
{
	int	i;

	i = 0;
	while (i < HEX_SIZE)
	{
		if ((i + index) < size)
		{
			write(1, &HEX_TAB[str[i] / HEX_SIZE], 1);
			write(1, &HEX_TAB[str[i] % HEX_SIZE], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	ft_putstr_np(unsigned char *str, int ind, int s, unsigned int *cnt)
{
	int	i;

	i = 0;
	while (i < HEX_SIZE)
	{
		if ((i + ind) < s)
		{
			if (str[i] >= 32 && str[i] <= 126)
				write(1, &str[i], 1);
			else
				write(1, ".", 1);
		}
		else
			return ;
		i++;
		*cnt += 1;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		ft_print_hex_ad((unsigned long)(addr + i));
		ft_put_hex((unsigned char *)(addr + i), i, size);
		ft_putstr_np((unsigned char *)(addr + i), i, size, &count);
		if (count == size)
			return (NULL);
		write(1, "\n", 1);
		i += 16;
	}
	return (NULL);
}
/*
int		main(void)
{
char	*str;
char	*str2;

str = "¶Bonjour des amis, comment ca va? \b are you okay\t \r?  ";
str2 = "¥KJ¥DHLFKJABLJKB&T*&KJLBFKJB LE  ";
ft_print_memory(str, 58);
write(1, "\nStr2 \n", 7);
ft_print_memory(str2, 100);

return (0);
}*/

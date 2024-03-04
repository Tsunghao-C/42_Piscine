/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:17:19 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/29 11:18:49 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	output(char d_1, char d_2, char d_3)
{
	ft_putchar(d_1);
	ft_putchar(d_2);
	ft_putchar(d_3);
}

void	print_char(char d_1, char d_2, char d_3)
{
	if (d_1 == '7' && d_2 == '8' && d_3 == '9')
	{
		output(d_1, d_2, d_3);
	}
	else
	{
		output(d_1, d_2, d_3);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	d_1;
	char	d_2;
	char	d_3;

	d_1 = '0';
	while (d_1 <= '7')
	{
		d_2 = d_1 + 1;
		while (d_2 <= '8')
		{
			d_3 = d_2 + 1;
			while (d_3 <= '9')
			{
				print_char(d_1, d_2, d_3);
				d_3++;
			}
			d_2++;
		}
		d_1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/

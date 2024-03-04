/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:37:32 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/29 11:17:57 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	print_int(int c)
{
	int	res_c_u;
	int	res_c_t;

	res_c_t = (c / 10) % 10;
	res_c_u = c % 10;
	ft_putchar(res_c_t + 48);
	ft_putchar(res_c_u + 48);
}

void	out_put(int a, int b)
{
	print_int(a);
	write(1, " ", 1);
	print_int(b);
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			out_put(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/

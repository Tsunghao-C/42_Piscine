/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:27:58 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/12 17:05:04 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_headline(int h)
{
	int	x;

	x = 2;
	ft_putchar('A');
	while (x <= h)
	{
		while (x < h)
		{
			ft_putchar('B');
			x++;
		}
		ft_putchar('C');
		x++;
	}
	ft_putchar('\n');
}

void	print_body_line(int h)
{
	int	x;

	x = 2;
	ft_putchar('B');
	while (x <= h)
	{
		while (x < h)
		{
			ft_putchar(' ');
			x++;
		}
		ft_putchar('B');
		x++;
	}
	ft_putchar('\n');
}

void	rush(int h, int v)
{
	int	y;

	y = 2;
	
	if (h <= 0 || v <= 0)
	{
		ft_putstr("Input error - Only accept non-zero positive integer!");
		ft_putchar('\n');
	}	
	else
	{
		print_headline(h);
		while (y < v)
		{
			print_body_line(h);
			y++;
		}	
		if (v != 1)
		{
			print_headline(h);
		}
	}
}

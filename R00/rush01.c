/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:00:40 by jmenard           #+#    #+#             */
/*   Updated: 2024/02/11 21:44:55 by tsuchen          ###   ########.fr       */
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
	ft_putchar('/');
	while (x <= h)
	{
		while (x < h)
		{
			ft_putchar('*');
			x++;
		}
		ft_putchar('\\');
		x++;
	}
	ft_putchar('\n');
}

void	print_bottom_line(int h)
{
	int	x;

	x = 2;
	ft_putchar('\\');
	while (x <= h)
	{
		while (x < h)
		{
			ft_putchar('*');
			x++;
		}
		ft_putchar('/');
		x++;
	}
	ft_putchar('\n');
}

void	print_body_line(int h)
{
	int	x;

	x = 2;
	ft_putchar('*');
	while (x <= h)
	{
		while (x < h)
		{
			ft_putchar(' ');
			x++;
		}
		ft_putchar('*');
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
			print_bottom_line(h);
		}
	}
}

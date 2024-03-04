/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:38:51 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/28 19:12:34 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEX_TABLE "0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(unsigned char c)
{
	ft_putchar('\\');
	ft_putchar(HEX_TABLE[(c / 16)]);
	ft_putchar(HEX_TABLE[(c % 16)]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			ft_print_hexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	*str;
	char	*str2= "¶\nCou\\/cou\t \b tu vas bien `82\b\t\t@&*()_ \r\b\bd¥---";
	str = "";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	ft_putstr_non_printable(str2);
	return (0);
}*/

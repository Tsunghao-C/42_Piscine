/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:31:17 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/26 11:50:54 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_isblank(char *str);
int		ft_base_check(char *str);
long	ft_atoi_base(char *str, char *base);
char	*ft_strcat_char(char *dest, char src);

void	ft_putnbr_base(long nbr, char *base, char *output)
{
	int		base_len;

	base_len = ft_base_check(base);
	if (nbr < 0)
	{
		ft_strcat_char(output, '-');
		nbr *= (-1);
	}
	if (nbr >= base_len)
		ft_putnbr_base((nbr / base_len), base, output);
	ft_strcat_char(output, base[(nbr % base_len)]);
}

void	ft_size_count(long dec_nbr, char *base_to, int *count)
{
	int		base_len;

	base_len = ft_base_check(base_to);
	*count += 1;
	if (dec_nbr < 0)
	{
		*count += 1;
		dec_nbr *= (-1);
	}
	if (dec_nbr >= base_len)
		ft_size_count((dec_nbr / base_len), base_to, count);
	return ;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*output;
	int		size_count;
	long	dec_n;

	size_count = 0;
	if (ft_base_check(base_from) == 0 || ft_base_check(base_to) == 0)
		return (0);
	dec_n = ft_atoi_base(nbr, base_from);
	ft_size_count(dec_n, base_to, &size_count);
	output = (char *)malloc((size_count + 1) * sizeof(char));
	if (!output)
		return (0);
	output[0] = '\0';
	ft_putnbr_base(dec_n, base_to, output);
	return (output);
}
/*
int	main(void)
{
	char	*nbr = "   \t+-+-+--80000000*&bcde";
	char	*base_from = "0123456789ABCDEF";
	char	*base_to = "0123456789";
	char	*output;

	output = ft_convert_base(nbr, base_from, base_to);
	printf("Initial nbr str is: %s\n", nbr);
	printf("Initial nbr dcl is: %ld\n", ft_atoi_base(nbr, base_from));
	printf("Base_from is      : %s\n", base_from);
	printf("Output in base is : %s\n", output);
	printf("Base_to is        : %s\n", base_to);
	free(output);
	return (0);
}*/

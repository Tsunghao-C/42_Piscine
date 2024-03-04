/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:00:25 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/21 16:10:41 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = (argc - 1);
	if (argc < 1)
		return (0);
	while (i > 0)
	{
		while (*argv[i])
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 09:55:14 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/12 16:44:42 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rush(int h, int v);

int	main(int ac, char *av[])
{
	if (ac != 3)
	{
		write(1, "Not enough inputs", 17);
		return (0);
	}
	rush(atoi(av[1]), atoi(av[2]));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:07:25 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:07:40 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char *av[])
{
	int		fd_out;
	int		tail_size;

	if (ft_strcmp(av[1], "-c") != 0)
	{
		ft_print_err4(av[1]);
		return (0);
	}
	if (ft_str_is_numeric(av[2]) == 0)
	{
		ft_print_err3(av[2], EINVAL);
		return (0);
	}
	tail_size = ft_atoi(av[2]);
	fd_out = ft_set_fd_out(ac, av);
	ft_iterate_arg(ac, av, fd_out, tail_size);
	close(fd_out);
	return (0);
}
/* Another way of looking at cat -> INPUT and OUTPUT
 * 1. INTPUT
 * 	if no args or av = '-'
 * 		STDINT;
 * 	else
 * 		open and read(file);
 * 2. OUTPUT
 * 	if no '>'
 * 		STDOUT;
 * 	else
 * 		fd_output = open(path, O_WRONLY | O_CREAT, 0666);
 * 		write(fd_output, buff, sizeof(buff));
 */

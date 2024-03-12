#include "ft.h"
#include <stdio.h>

int	main(int ac, char *av[])
{
	int		fd_out;

	if (ft_strcmp(av[1], "-C") != 0)
	{
		ft_print_err4(av[1]);
		return (0);
	}
	fd_out = ft_set_fd_out(ac, av);
	ft_iterate_arg(ac, av, fd_out);
	close(fd_out);
	return (0);
}

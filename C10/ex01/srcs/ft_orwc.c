#include "ft.h"

void	ft_orwc(char *path, char *buff, int fd_out)
{
	int	fd_in;

	fd_in = open(path, O_RDONLY);
	if (fd_in == -1)
	{
		ft_print_err(path, errno);
		return ;
	}
	ft_rw(buff, fd_out, fd_in);
	close(fd_in);
}

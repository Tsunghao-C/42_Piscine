#include "ft.h"

void	ft_orwc(char *p_name, char *path, char *buff, int fd_out)
{
	int	nu_rd;
	int	fd_in;

	nu_rd = 1;
	fd_in = open(path, O_RDONLY);
	if (fd_in == -1)
	{
		ft_print_err(p_name, path, errno);
		return ;
	}
	while (nu_rd > 0)
	{
		nu_rd = read(fd_in, buff, sizeof(buff));
		if (nu_rd == -1)
		{
			ft_print_err(p_name, path, errno);
			return ;
		}
		write(fd_out, buff, nu_rd);
	}
	close(fd_in);
}

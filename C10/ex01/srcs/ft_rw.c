#include "ft.h"

void	ft_rw(char *p_name, char *buff, int fd_out)
{
	int	nu_rd;
	int	nu_wr;

	nu_rd = 1;
	while (nu_rd > 0)
	{
		nu_rd = read(STDIN_FILENO, buff, sizeof(buff));
		if (nu_rd == -1)
		{
			ft_putstr(p_name);
			write(1, ": ", 2);
			ft_putstr(strerror(errno));
			write(1, "\n", 1);
			return ;
		}
		nu_wr = write(fd_out, buff, nu_rd);
		if (nu_wr != nu_rd)
		{
			ft_putstr(p_name);
			write(1, ": ", 2);
			ft_putstr(strerror(errno));
			write(1, "\n", 1);
			return ;
		}
	}
}

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
			ft_print_err2(p_name, errno);
			return ;
		}
		nu_wr = write(fd_out, buff, nu_rd);
		if (nu_wr != nu_rd)
		{
			ft_print_err2(p_name, errno);
			return ;
		}
	}
	return ;
}

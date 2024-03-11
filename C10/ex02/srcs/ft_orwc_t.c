#include "ft.h"

void	ft_orwc_t1(int fd_in, int fd_out, int t_size)
{
	char	*buff;

	buff = (char *)malloc((t_size + 1) * sizeof(char));
	if (!buff)
		return ;
	ft_clear_buff(buff, t_size);
	ft_rw_t(buff, fd_out, fd_in, t_size);
	free(buff);
}

void	ft_orwc_t2(char *path, int fd_out, int t_size)
{
	int		fd_in;
	char	*buff;

	fd_in = open(path, O_RDONLY);
	if (fd_in == -1)
	{
		ft_print_err(path, errno);
		return ;
	}
	buff = (char *)malloc((t_size + 1) * sizeof(char));
	if (!buff)
		return ;
	ft_clear_buff(buff, t_size);
	ft_rw_t(buff, fd_out, fd_in, t_size);
	free(buff);
	close(fd_in);
}

void	ft_orwc_t3(char *path, int fd_out, int t_size, int *count)
{
	int		fd_in;
	char	*buff;

	fd_in = open(path, O_RDONLY);
	if (fd_in == -1)
	{
		ft_print_err(path, errno);
		return ;
	}
	buff = (char *)malloc((t_size + 1) * sizeof(char));
	if (!buff)
		return ;
	ft_clear_buff(buff, t_size);
	ft_putstr_header(path, fd_out, count);
	ft_rw_t(buff, fd_out, fd_in, t_size);
	free(buff);
	close(fd_in);
}

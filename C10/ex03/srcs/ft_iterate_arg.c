#include "ft.h"

void	ft_iterate_arg(int ac, char *av[], int fd_out)
{
	int		i;
	int		wc;
	char	*buff;

	wc = 0;
	buff = (char *)malloc((HEX_SIZE + 1) * sizeof(char));
	if (!buff)
		return ;
	ft_clear_buff(buff, HEX_SIZE);
	i = 1;
	if (ac == 2 || ft_strcmp(av[2], ">") == 0)
		ft_rw_h(buff, fd_out, STDIN_FILENO, &wc);
	while (++i < ac)
	{
		if (ft_strcmp(av[i], ">") == 0)
			break ;
		else
			ft_orwc_h2(buff, av[i], fd_out, &wc);
	}
	if (wc != 0 || ft_strlen(buff) != 0)
		ft_print_last_mem(buff, fd_out, &wc);
	free(buff);
	return ;
}

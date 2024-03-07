#include "ft.h"

void	ft_print_err(char *p_name, char *av_name, int err)
{
	ft_putstr(p_name);
	write(1, ": ", 2);
	ft_putstr(av_name);
	write(1, ": ", 2);
	ft_putstr(strerror(err));
	write(1, "\n", 1);
	return ;
}

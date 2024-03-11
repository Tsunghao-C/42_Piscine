#include "ft.h"

int	ft_count_inputs(char *av[])
{
	int	i;

	i = 0;
	while (av[i] && (ft_strcmp(av[i], ">") != 0))
		i++;
	return (i);
}

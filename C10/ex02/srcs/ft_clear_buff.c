#include "ft.h"

void	ft_clear_buff(char *buff, int t_size)
{
	int	i;

	i = 0;
	while (i <= t_size)
	{
		buff[i] = '\0';
		i++;
	}
}

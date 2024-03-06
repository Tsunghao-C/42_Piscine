#include "ft.h"

void	ft_read_n_dsp(int fd)
{
	char	buff[BUFF_SIZE];
	int	num_read;

	num_read = read(fd, buff, BUFF_SIZE - 1);
	if (num_read == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	buff[num_read + 1] = '\0';
	ft_putstr(buff);
	while (num_read == (BUFF_SIZE - 1))
	{
		num_read = read(fd, buff, BUFF_SIZE - 1);
		buff[num_read + 1] = '\0';
		ft_putstr(buff);
	}
}

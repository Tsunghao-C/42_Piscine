#include "ft.h"

void	ft_read_n_dsp(int fd)
{
	char	buff[BUFF_SIZE];
	int	num_read;

	num_read = 1;
	while (num_read > 0)
	{
		num_read = read(fd, buff, sizeof(buff));
		if (num_read == -1)
		{
			write(1, "Cannot read file.\n", 18);
			return ;
		}
		write(1, buff, num_read);
	}
}

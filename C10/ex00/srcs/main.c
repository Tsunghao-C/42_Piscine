
#include "ft.h"

int	main(int ac, char *av[])
{
	int	fd;

	if (ac != 2)
	{
		if (ac < 2)
			write(1, "File name missing.\n", 19);
		else
			write(1, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd != -1)
	{
		ft_read_n_dsp(fd);
		close(fd);
	}
	else
		write(1, "Cannot read file.\n", 18);
	return (0);
}

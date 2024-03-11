#include "ft.h"

int	main(int ac, char *av[])
{
	int		i;
	int		fd_out;
	char	buff[BUFF];

	i = 0;
	fd_out = ft_set_fd_out(ac, av);
	buff[0] = '\0';
	if (ac == 1 || ft_strcmp(av[1], ">") == 0)
		ft_rw(buff, fd_out, STDIN_FILENO);
	while (++i < ac)
	{
		if (ft_strcmp(av[i], "-") == 0)
			ft_rw(buff, fd_out, STDIN_FILENO);
		else if (ft_strcmp(av[i], ">") == 0)
			break ;
		else
			ft_orwc(av[i], buff, fd_out);
	}
	close(fd_out);
	return (0);
}
/* Another way of looking at cat -> INPUT and OUTPUT
 * 1. INTPUT
 * 	if no args or av = '-'
 * 		STDINT;
 * 	else
 * 		open and read(file);
 * 2. OUTPUT
 * 	if no '>'
 * 		STDOUT;
 * 	else
 * 		fd_output = open(path, O_WRONLY | O_CREAT, 0666);
 * 		write(fd_output, buff, sizeof(buff));
 */

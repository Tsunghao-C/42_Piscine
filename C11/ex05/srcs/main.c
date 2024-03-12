#include "ft.h"

int	main(int ac, char *av[])
{
	int		val_1;
	int		val_2;
	void	*operator;

	if (ac != 4)
		return (0);
	operator = ft_check_op(av[2]);
	if (operator == NULL)
	{
		ft_output(0);
		return (0);
	}
	val_1 = ft_atoi(av[1]);
	val_2 = ft_atoi(av[3]);
	if (val_2 == 0 && (operator == &divide || operator == &modulo))
	{
		if (operator == &divide)
			ft_print_err(1);
		else if (operator == &modulo)
			ft_print_err(2);
		return (0);
	}
	ft_output(ft_do_op(val_1, val_2, operator));
	return (0);
}

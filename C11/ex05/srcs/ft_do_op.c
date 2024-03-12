#include "ft.h"

int	ft_do_op(int val_1, int val_2, int(*f)(int, int))
{
	int	output;

	output = f(val_1, val_2);
	return (output);
}

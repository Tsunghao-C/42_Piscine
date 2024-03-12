#include "ft.h"

void	ft_print_err(int err)
{
	if (err == 1)
		write(ER, "Stop : division by zero\n", 24);
	else if (err == 2)
		write(ER, "Stop : modulo by zero\n", 22);
	else
		return ;
}

#include "ft.h"

void	*ft_check_op(char *str)
{
	if (ft_strcmp(str, "+") == 0)
		return (&add);
	else if (ft_strcmp(str, "-") == 0)
		return (&minus);
	else if (ft_strcmp(str, "*") == 0)
		return (&multiply);
	else if (ft_strcmp(str, "/") == 0)
		return (&divide);
	else if (ft_strcmp(str, "%") == 0)
		return (&modulo);
	else
		return (NULL);
}

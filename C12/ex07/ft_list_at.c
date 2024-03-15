#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = begin_list;
	while (i < nbr && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
/*
void	ft_list_push_back(t_list **begin_list, void *data);

int	main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	t_list	*lst;
	int	a = 3;
	int	b = 4;
	t_list	*output;

	lst = ft_create_elem(&a);
	for (int i = 0; i < 10; i++)
		ft_list_push_back(&lst, &b);
	output = ft_list_at(lst, atoi(av[1]));
	printf("output ptr is: %p\n", output);
	printf("data of list %d is: %d\n", atoi(av[1]), *(int *)output->data);
	return (0);
}*/

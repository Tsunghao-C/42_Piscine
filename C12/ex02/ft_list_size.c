#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = begin_list;
	while (tmp != NULL)
	{
		i++;
		tmp = (*tmp).next;
	}
	return (i);
}
/*
t_list  *ft_create_elem(void *data);
void    ft_list_push_front(t_list **begin_list, void *data);

int	main(void)
{
	t_list	*lst;
	int	a = 3;
	int	i = 0;

	lst = ft_create_elem(&a);
	while (i < 10)
	{
		ft_list_push_front(&lst, &a);
		i++;
	}
	printf("size of list is: %d\n", ft_list_size(lst));
	return (0);
}*/

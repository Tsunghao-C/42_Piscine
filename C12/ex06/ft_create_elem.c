#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->data = data;
	lst->next = NULL;
	return (lst);
}
/*
int	main(void)
{
	int	a = 7;
	t_list	*lst;

	lst = ft_create_elem(&a);
	printf("val_lst: %d, add_lst: %p\n", *((int *)(lst->data)), lst->data);
	printf("val_a  : %d, add_a  : %p\n", a, &a);
	printf("add of nex in lst: %p\n", lst->next);
	free(lst);
	return (0);
}*/

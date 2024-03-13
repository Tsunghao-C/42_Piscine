#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*lst;
	t_list	*temp;

	i = 0;
	lst = NULL;
	temp = NULL;
	while (i < size)
	{
		if (lst)
			temp = lst;
		lst = ft_create_elem(strs[i]);
		if (temp)
			lst->next = temp;
		i++;
	}
	return (lst);
}
/*
int	main(void)
{
	char	*strs[7] = {"I", "am", "a", "list", "of", "strings", "!"};
	int	size = 7;
	t_list	*str_list;
	t_list	*tmp;

	str_list = ft_list_push_strs(size, strs);
	tmp = str_list;
	while (tmp)
	{
		printf("list: %s\n", (char *)(tmp->data));
		tmp = tmp->next;
	}
	free(str_list);
	return (0);
}*/

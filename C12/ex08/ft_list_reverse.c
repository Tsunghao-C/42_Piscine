#include "ft_list.h"
#include <stdio.h>

void	ft_swap_data(t_list *list_1, t_list *list_2)
{
	void	*temp;

	temp = list_1->data;
	list_1->data = list_2->data;
	list_2->data = temp;
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*tmp3;

	tmp1 = *begin_list;
	tmp3 = NULL;
	while (tmp1 != tmp3)
	{
		tmp2 = tmp1;
		while (tmp2->next != tmp3)
			tmp2 = tmp2->next;
		if (tmp1 == tmp2)
			break ;
		ft_swap_data(tmp1, tmp2);
		tmp3 = tmp2;
		tmp1 = tmp1->next;
	}
}
/*
t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

int	main(void)
{
	t_list	*lst;
	int	tab[4] = {1, 2, 3, 4};
	int	i = 0;
	t_list	*tmp1;
	t_list	*tmp2;

	lst = ft_create_elem((tab + 0));
	while (++i < 4)
		ft_list_push_back(&lst, (tab + i));
	printf("==>  original list  <==\n");
	tmp1 = lst;
	for (int j = 0; j < 4; j++)
	{
		printf("%d item is: %d\n", j, *(int *)tmp1->data);
		tmp1 = tmp1->next;
	}
	printf("==>  reversed list  <==\n");
	ft_list_reverse(&lst);
	tmp2 = lst;
	for (int k = 0; k < 4; k++)
	{
		printf("%d item is: %d\n", k, *(int *)tmp2->data);
		tmp2 = tmp2->next;
	}
	return (0);
}*/
/*
var	| tab | t[0]| t[1]| t[2]| t[3]|
val	| 0x2 |  1  |  2  |  3  |  4  |
add	| 0x1 | 0x2 | 0x6 | 0xa | 0xe |
ptr	| tab | t+0 | t+1 | t+2 | t+3 |
*/

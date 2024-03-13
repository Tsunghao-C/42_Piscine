#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_list;

	new_list = ft_create_elem(data);
	if (!new_list)
		return ;
	new_list->next = *begin_list;
	*begin_list = new_list;
}
/*
int	main(void)
{
	t_list	*begin_list;
	t_list	*sec_list;
	int	a = 3;
	int	b = 4;
	int	c = 9;
	t_list	*tmp;
	t_list	*tmp2;

	begin_list = ft_create_elem(&c);
	sec_list = ft_create_elem(&b);
	begin_list->next = sec_list;
	tmp = begin_list;
	printf("data	|current add	|next add	|ptr add\n");
	while (tmp)
	{
		printf("%d |%p |%p\n", *(int *)(*tmp).data, tmp, (*tmp).next);
		tmp = (*tmp).next;
	}
	ft_list_push_front(&begin_list, &a);
	tmp2 = begin_list;
	printf("  ==> after change <==\n");
	while (tmp2)
	{
		printf("%d |%p |%p\n", *(int *)(*tmp2).data, tmp2, (*tmp2).next);
		tmp2 = (*tmp2).next;
	}
	free(begin_list);
	free(sec_list);
	return (0);
}*/
/*
      |        	      BEFORE		  |		   AFTER    	      |
-------------------------------------------------------------------------------
level |     lst_ptr     |	lst       |     lst_ptr	    |	    lst	      |
-------------------------------------------------------------------------------
varia | beg | 2nd | new |     |     |     | beg | 2nd | new |		      |
value | 0x1 | 0x2 | 0x3 |     |     |     | 0x3 | 0x2 | 0x3 |		      |
-------------------------------------------------------------------------------
data  |     |     |     | &c  | &b  | &a  |     |     |     | &c  | &b  | &a  |
next  |     |     |     | 0x2 | 0x0 | 0x0 |     |     |     | 0x2 | 0x0 | 0x1 |
-------------------------------------------------------------------------------
mem_ad| 0xa | 0xb | 0xc | 0x1 | 0x2 | 0x3 | 0xa | 0xb | 0xc | 0x1 | 0x2 | 0x3 |
*/

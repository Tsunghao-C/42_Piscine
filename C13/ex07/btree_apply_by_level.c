#include "ft_btree.h"
#include <stdlib.h>

t_list	*ft_create_elem(t_btree *root)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->next = NULL;
	lst->root = root;
	return (lst);
}

void	ft_enqueue(t_list **begin_list, t_btree *root)
{
	t_list	*tmp;
	t_list	*new_lst;

	tmp = *begin_list;
	new_lst = ft_create_elem(root);
	if (!new_lst)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_lst;
	new_lst->current_level = (*begin_list)->current_level + 1;
	if (new_lst->current_level > tmp->current_level) 
		new_lst->is_first = 1;
	else
		new_lst->is_first = 0;
}

void	ft_dequeue(t_list **begin_list)
{
	t_list	*tmp;

	tmp = *begin_list;
	if (*begin_list == NULL)
		return;
	*begin_list = (*begin_list)->next;
	free(tmp);
}

void	ft_scan_over_queue(t_list **que, void
(*applyf)(void *item, int current_level, int is_first))
{
	if (*que == NULL)
		return ;
	if ((*que)->root->left)
		ft_enqueue(que, (*que)->root->left);
	if ((*que)->root->right)
		ft_enqueue(que, (*que)->root->right);
	applyf((*que)->root->item, (*que)->current_level, (*que)->is_first);
	ft_dequeue(que);
	ft_scan_over_queue(que, applyf);
}

void	btree_apply_by_level(t_btree *root, void
(*applyf)(void *item, int current_level, int is_first))
{
	t_list	*que;

	if (!root)
		return ;
	que = ft_create_elem(root);
	if (!que)
		return ;
	que->current_level = 0;
	que->is_first = 1;
	ft_scan_over_queue(&que, applyf);
}
/*
#include <stdio.h>
void	ft_print_item(void *ad)
{
	printf("Item is: %d, add is: %p\n", *(int *)ad, ad);
}

void	ft_print_item2(void *item, int current_level, int is_first)
{
	printf("Item is	  : %d,	add is	: %p\n", *(int *)item, item);
	printf("Curr level: %d,	is_first: %d\n", current_level, is_first);
}

void	btree_apply_infix(t_btree *root, void (*applyf)(void *));

int	main(void)
{
	int	a = 1;
	int	b = 2;
	int	c = 3;
	int	d = 4;
	int	e = 3;
	int	f = 4;
	int	h = 7;
	int	i = 9;
	t_btree	*bt_r;
	t_btree	*bt_rl;
	t_btree	*bt_rr;
	t_btree	*bt_rlr;
	t_btree	*bt_rrl;
	t_btree	*bt_rrr;
	t_btree *bt_rlrl;
	t_btree *bt_rrll;
	t_btree *bt_rrlr;
	t_btree *bt_rrlrr;

	bt_r = btree_create_node(&a);
	bt_rl = btree_create_node(&b);
	bt_rr = btree_create_node(&c);
	bt_rlr = btree_create_node(&e);
	bt_rrl = btree_create_node(&d);
	bt_rrr = btree_create_node(&f);
	bt_rlrl = btree_create_node(&h);
	bt_rrll = btree_create_node(&h);
	bt_rrlr = btree_create_node(&h);
	bt_rrlrr = btree_create_node(&i);
	bt_r->left = bt_rl;
	bt_r->right = bt_rr;
	bt_rl->right = bt_rlr;
	bt_rr->left = bt_rrl;
	bt_rr->right = bt_rrr;
	bt_rlr->left = bt_rlrl;
	bt_rrl->left = bt_rrll;
	bt_rrl->right = bt_rrlr;
	bt_rrlr->right = bt_rrlrr;
	printf("==>  DFS in-order  <==\n");
	btree_apply_infix(bt_r, &ft_print_item);
	printf("==>  BFS by-level  <==\n");
	btree_apply_by_level(bt_r, &ft_print_item2);
	return (0);
}*/
/*		   -----
		   | 1 |
		   -----
		/  	  \
	       /	   \
	    -----   	  -----
	    | 2 |   	  | 3 |
	    -----   	  -----
	        \	  /   \
	         \	 /     \
	        -----  -----  -----
	        | 3 |  | 4 |  | 4 |
	        -----  -----  -----
		/       / \
	       /       /   \
	    -----   ----- -----
	    | 7 |   | 7 | | 7 |
	    -----   ----- -----
	    		     \
			      \
			     -----
			     | 9 |
			     -----
*/

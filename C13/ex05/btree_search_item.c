#include "ft_btree.h"
#include <stdio.h>

void	*btree_search_item(t_btree *root, void *data_ref, int
(*cmpf)(void *, void *))
{
	void	*temp;

	if (!root)
		return (NULL);
	temp = btree_search_item(root->left, data_ref, cmpf);
	if (temp)
		return (temp);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	temp = btree_search_item(root->right, data_ref, cmpf);
	if (temp)
		return (temp);
	return (NULL);
}
/*
int	ft_cmpf(void *ad1, void *ad2)
{
	int	nb1 = *(int *)ad1;
	int	nb2 = *(int *)ad2;

	return (nb1 - nb2);
}

void	ft_print_item(void *ad)
{
	printf("Item is: %d, add is: %p\n", *(int *)ad, ad);
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
	int	g = 4;
	t_btree	*bt_r;
	t_btree	*bt_rl;
	t_btree	*bt_rr;
	t_btree	*bt_rlr;
	t_btree	*bt_rrl;
	t_btree	*bt_rrr;
	t_btree	*bt_f;

	bt_r = btree_create_node(&a);
	bt_rl = btree_create_node(&b);
	bt_rr = btree_create_node(&c);
	bt_rlr = btree_create_node(&e);
	bt_rrl = btree_create_node(&d);
	bt_rrr = btree_create_node(&f);
	bt_r->left = bt_rl;
	bt_r->right = bt_rr;
	bt_rl->right = bt_rlr;
	bt_rr->left = bt_rrl;
	bt_rr->right = bt_rrr;
	printf("==>  Before insert  <==\n");
	btree_apply_infix(bt_r, &ft_print_item);
	bt_f = (t_btree *)btree_search_item(bt_r, &g, &ft_cmpf);
	printf("==>  After search  <==\n");
	printf("Found is: %d, add is: %p\n", *(int *)(bt_f->item), bt_f->item);
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
*/

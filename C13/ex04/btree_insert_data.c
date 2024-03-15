#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int
(*cmpf)(void *, void *))
{
	void	*temp;

	temp = item;
	if (*root == NULL)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf(item, (*root)->item) < 0)
	{
		temp = (*root)->item;
		(*root)->item = item;
	}
	if ((*root)->right)
		btree_insert_data(&((*root)->right), temp, cmpf);
	else if ((*root)->left && cmpf(temp, ((*root)->left)->item) >= 0)
		btree_insert_data(&((*root)->right), temp, cmpf);
	else
		btree_insert_data(&((*root)->left), temp, cmpf);
}
/*
#include <stdio.h>

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

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

int	main(void)
{
	int	a = 1;
	int	b = 2;
	int	c = 3;
	int	d = 4;
	int	e = 5;
	int	f = 6;
	int	g = 9;
	t_btree	*bt_r;
	t_btree	*bt_rl;
	t_btree	*bt_rr;
	t_btree	*bt_rlr;
	t_btree	*bt_rrl;
	t_btree	*bt_rrr;

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
	btree_apply_prefix(bt_r, &ft_print_item);
	btree_insert_data(&bt_r, &g, &ft_cmpf);
	printf("==>  After insert and sort  <==\n");
	btree_apply_prefix(bt_r, &ft_print_item);
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
	        | 5 |  | 4 |  | 6 |
	        -----  -----  -----
*/

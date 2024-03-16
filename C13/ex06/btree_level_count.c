#include "ft_btree.h"
#include <stdio.h>

int	btree_level_counter(t_btree *root, int output)
{
	int	count_l;
	int	count_r;

	count_l = output;
	count_r = output;
	if (root->left)
		count_l = btree_level_counter(root->left, (output + 1));
	if (root->right)
		count_r = btree_level_counter(root->right, (output + 1));
	if (count_l > count_r)
		return (count_l);
	else
		return (count_r);
}

int	btree_level_count(t_btree *root)
{
	int	count;

	if (!root)
		return (0);
	count = btree_level_counter(root, 1);
	return (count);
}
/*
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
	int	h = 7;
	t_btree	*bt_r;
	t_btree	*bt_rl;
	t_btree	*bt_rr;
	t_btree	*bt_rlr;
	t_btree	*bt_rrl;
	t_btree	*bt_rrr;
	t_btree *bt_rlrl;
	t_btree *bt_rrll;
	t_btree *bt_rrlr;

	bt_r = btree_create_node(&a);
	bt_rl = btree_create_node(&b);
	bt_rr = btree_create_node(&c);
	bt_rlr = btree_create_node(&e);
	bt_rrl = btree_create_node(&d);
	bt_rrr = btree_create_node(&f);
	bt_rlrl = btree_create_node(&h);
	bt_rrll = btree_create_node(&h);
	bt_rrlr = btree_create_node(&h);
	bt_r->left = bt_rl;
	bt_r->right = bt_rr;
	bt_rl->right = bt_rlr;
	bt_rr->left = bt_rrl;
	bt_rr->right = bt_rrr;
	bt_rlr->left = bt_rlrl;
	bt_rrl->left = bt_rrll;
	bt_rrl->right = bt_rrlr;
	printf("==>  Before insert  <==\n");
	btree_apply_infix(bt_r, &ft_print_item);
	printf("==>  After count  <==\n");
	printf("level count of btree is: %d\n", btree_level_count(bt_r));	
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
*/

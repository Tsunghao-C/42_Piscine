/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:56:42 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:56:44 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	btree_apply_infix(root->left, applyf);
	applyf(root->item);
	btree_apply_infix(root->right, applyf);
}
/*
#include <stdio.h>
void	ft_print_item(void *ad)
{
	printf("Item is: %d, add is: %p\n", *(int *)ad, ad);
}

int	main(void)
{
	int	a = 1;
	int	b = 2;
	int	c = 3;
	int	d = 4;
	int	e = 5;
	int	f = 6;
	t_btree	*bt_r;
	t_btree	*bt_rl;
	t_btree	*bt_rr;
	t_btree	*bt_rll;
	t_btree	*bt_rlr;
	t_btree	*bt_rrl;

	bt_r = btree_create_node(&a);
	bt_rl = btree_create_node(&b);
	bt_rr = btree_create_node(&c);
	bt_rll = btree_create_node(&d);
	bt_rlr = btree_create_node(&e);
	bt_rrl = btree_create_node(&f);
	bt_r->left = bt_rl;
	bt_r->right = bt_rr;
	bt_rl->left = bt_rll;
	bt_rl->right = bt_rlr;
	bt_rr->left = bt_rrl;
	btree_apply_infix(bt_r, &ft_print_item);
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
	    /   \	  /
	   /     \	 /
	-----   -----  -----
	| 4 |   | 5 |  | 6 |
	-----   -----  -----
*/

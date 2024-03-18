/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:47:46 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:47:50 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*bt;

	bt = (t_btree *)malloc(sizeof(t_btree));
	if (!bt)
		return (0);
	bt->item = item;
	bt->left = 0;
	bt->right = 0;
	return (bt);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 7;
	t_btree	*bt;

	bt = btree_create_node(&a);
	printf("val_bt: %d, add_bt: %p\n", *((int *)(bt->item)), bt->item);
	printf("val_a  : %d, add_a  : %p\n", a, &a);
	printf("add of right: %p; and left: %p\n", bt->right, bt->left);
	free(bt);
	return (0);
}*/

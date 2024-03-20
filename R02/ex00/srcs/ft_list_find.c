/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:31:01 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/20 21:35:07 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_list_find(t_list *begin_list, void *rf, int (*cmp)(void *, void *))
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp)
	{
		if (cmp(tmp->data_n, rf) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

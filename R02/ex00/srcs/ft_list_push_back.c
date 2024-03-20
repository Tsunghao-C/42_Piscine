/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:24:02 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/19 21:59:25 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_push_back(t_list **begin_list, char *buff, int start, int end)
{
	t_list	*new_list;
	t_list	*tmp;

	new_list = ft_create_elem(buff, start, end);
	if (!new_list)
		return ;
	tmp = *begin_list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_list;
}

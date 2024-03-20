/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:25:24 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/19 22:07:18 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	free_data(void *addr)
{
	t_list	*tmp;

	tmp = (t_list *)addr;
	free(tmp->data_n);
	free(tmp->data_w);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;

	while (begin_list)
	{
		tmp = begin_list;
		begin_list = begin_list->next;
		free_fct(tmp);
		free(tmp);
	}
}

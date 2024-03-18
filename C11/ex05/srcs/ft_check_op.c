/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_op.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:02:56 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:02:59 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_check_op(char *str)
{
	if (ft_strcmp(str, "+") == 0)
		return (&add);
	else if (ft_strcmp(str, "-") == 0)
		return (&minus);
	else if (ft_strcmp(str, "*") == 0)
		return (&multiply);
	else if (ft_strcmp(str, "/") == 0)
		return (&divide);
	else if (ft_strcmp(str, "%") == 0)
		return (&modulo);
	else
		return (NULL);
}

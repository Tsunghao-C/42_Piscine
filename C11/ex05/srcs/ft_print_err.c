/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:59 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:02:00 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_err(int err)
{
	if (err == 1)
		write(ER, "Stop : division by zero\n", 24);
	else if (err == 2)
		write(ER, "Stop : modulo by zero\n", 22);
	else
		return ;
}

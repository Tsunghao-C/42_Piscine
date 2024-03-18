/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:35:13 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:05:12 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# define ER STDERR_FILENO

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_output(int nb);
void	*ft_check_op(char *str);
void	ft_print_err(int err);
int		ft_atoi(char *str);
int		ft_do_op(int val_1, int val_2, int (*f)(int, int));
int		ft_strcmp(char *s1, char *s2);
int		add(int a, int b);
int		minus(int a, int b);
int		multiply(int a, int b);
int		divide(int a, int b);
int		modulo(int a, int b);

#endif

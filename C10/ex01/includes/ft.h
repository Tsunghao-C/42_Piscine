/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:35:13 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/26 14:40:04 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# define BUFF 30720
# define ER STDERR_FILENO
# define P_NAME "ft_cat"

void	ft_putstr(char *str);
void	ft_putstr_err(char *str);
void	ft_rw(char *buff, int fd_out, int fd_in);
void	ft_orwc(char *path, char *buff, int fd_out);
void	ft_print_err(char *av_name, int err);
void	ft_print_err2(int err);
int		ft_strcmp(char *s1, char *s2);
int		ft_set_fd_out(int ac, char *av[]);

#endif

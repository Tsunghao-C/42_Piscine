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

void	ft_putstr(char *str);
void	ft_rw(char *p_name, char *buff, int fd_out);
void	ft_orwc(char *p_name, char *path, char *buff, int fd_out);
void    ft_print_err(char *p_name, char *av_name, int err);
int	ft_strlen(char *str);
int     ft_strcmp(char *s1, char *s2);
int     ft_set_fd_out(int ac, char *av[]);

#endif

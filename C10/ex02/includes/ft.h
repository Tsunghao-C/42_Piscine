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
# define P_NAME "ft_tail"

void	ft_putstr(char *str);
void    ft_putstr_err(char *str);
void    ft_putstr_header(char *path, int fd_out, int *count);
void	ft_rw_t(char *buff, int fd_out, int fd_in, int tail_size);
void	ft_orwc_t1(int fd_in, int fd_out, int t_size);
void	ft_orwc_t2(char *path, int fd_out, int t_size);
void	ft_orwc_t3(char *path, int fd_out, int t_size, int *count);
void	ft_print_err(char *av_name, int err);
void	ft_print_err2(int err);
void	ft_print_err3(char *av_name, int err);
void	ft_print_err4(char *av_name);
void	ft_iterate_arg(int ac, char *av[], int fd_out, int t_size);
void    ft_clear_buff(char *buff, int t_size);
int		ft_strlen(char *str);
int		ft_str_is_numeric(char *str);
int		ft_atoi(char *str);
int		ft_isblank(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_set_fd_out(int ac, char *av[]);
int     	ft_count_inputs(char *av[]);
char	*ft_strcat_tail(char *buff, char *buff_temp, int tail_size, int nu_rd);
char	*ft_strcpy_tail(char *buff, char *buff_temp, int tail_size, int nu_rd);
char	*ft_strncat(char *dest, char *src, unsigned int nb);

#endif

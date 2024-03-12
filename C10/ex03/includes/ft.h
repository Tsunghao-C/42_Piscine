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
# define P_NAME "ft_hexdump"
# define HEX_TAB "0123456789abcdef"
# define AD_SIZE 8
# define HEX_SIZE 16

void	ft_putstr(char *str);
void    ft_putstr_err(char *str);
void	ft_rw_h(char *buff, int fd_out, int fd_in, int *wc);
void	ft_orwc_h2(char *buff, char *path, int fd_out, int *wc);
void	ft_print_err(char *av_name, int err);
void	ft_print_err2(int err);
void	ft_print_err3(char *av_name, int err);
void	ft_print_err4(char *av_name);
void	ft_iterate_arg(int ac, char *av[], int fd_out);
void    ft_clear_buff(char *buff, int t_size);
void	*ft_print_memory(void *addr, unsigned int size, int fd_out, int *wc);
void    ft_print_hex_ad(int *wc, int fd_out);
void    ft_print_last_mem(char *buff, int fd_out, int *wc);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_set_fd_out(int ac, char *av[]);
char    *ft_strcat_head(char *buff, char *buff_temp, int *count);
char    *ft_strncat_head(char *buff, char *buff_t, int *cnt, unsigned int size);

#endif

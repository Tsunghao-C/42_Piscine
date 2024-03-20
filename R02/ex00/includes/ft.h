/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:35:13 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/20 21:34:00 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <errno.h>
# define BUFF 4096
# define ER STDERR_FILENO
# define P_NAME "rush-02"

typedef struct s_list
{
	struct s_list	*next;
	void			*data_n;
	void			*data_w;
}	t_list;

void	ft_putstr(char *str);
void	ft_putstr_err(char *str);
void	ft_print_err2(int err);
void	ft_rw(int fd_in, t_list *begin_dic);
void	ft_list_push_back(t_list **begin_list, char *buff, int start, int end);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	free_data(void *addr);
void	ft_read_n_parce(int fd, t_list **begin_dic);
void	ft_write_number(char *buff, t_list *begin_dic);
void	ft_clear_buff(char *buff);
char	*ft_strcat(char *dest, char *src);
char	*ft_remove_parced_data(char *buff);
char	*ft_itoa(int nbr);
char	*ft_itoa_power(int dgt);
t_list	*ft_set_reference_dic(int ac, char *av[]);
t_list	*ft_create_elem(char *buff, int start, int end);
t_list	*ft_list_find(t_list *begin_list, void *rf, int (*cmp)(void *, void *));
int		ft_strlen(char *str);
int		ft_strcmp(void *str1, void *str2);
int		ft_input_check(char *str);
int		ft_power(int nb, int power);
int		ft_atoi(char *str);
int		ft_strlcpy(char *dest, char *src, unsigned int size);

#endif

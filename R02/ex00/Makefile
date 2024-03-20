# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 16:51:02 by tsuchen           #+#    #+#              #
#    Updated: 2024/03/20 16:30:23 by tsuchen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = srcs/ft_atoi.c \
       srcs/ft_clear_buff.c \
       srcs/ft_create_elem.c \
       srcs/ft_input_check.c \
       srcs/ft_list_clear.c \
       srcs/ft_list_find.c \
       srcs/ft_list_push_back.c \
       srcs/ft_print_err.c \
       srcs/ft_putstr.c \
       srcs/ft_rw.c \
       srcs/ft_set_reference_dic.c \
       srcs/ft_strcat.c \
       srcs/ft_strcmp.c \
       srcs/ft_strlcpy.c \
       srcs/ft_write_number.c \
       srcs/main.c

OBJS = $(SRCS:.c=.o)

HEAD = includes/ft.h

CFLAGS = -Wall -Wextra -Werror

CC = cc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I$(dir $(HEAD))

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

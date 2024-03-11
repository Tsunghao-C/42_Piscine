# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 16:51:02 by tsuchen           #+#    #+#              #
#    Updated: 2024/02/29 18:49:42 by tsuchen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRCS = srcs/ft_atoi.c \
       srcs/ft_clear_buff.c \
       srcs/ft_count_inputs.c \
       srcs/ft_iterate_arg.c \
       srcs/ft_orwc_t.c \
       srcs/ft_print_err.c \
       srcs/ft_putstr.c \
       srcs/ft_rw_t.c \
       srcs/ft_set_fd_out.c \
       srcs/ft_str_is_numeric.c \
       srcs/ft_strcat_tail.c \
       srcs/ft_strcmp.c \
       srcs/ft_strcpy_tail.c \
       srcs/ft_strlen.c \
       srcs/ft_strncat.c \
       srcs/main.c

OBJS = $(SRCS:.c=.o)

HEAD = includes/ft.h

CFLAGS = -Wall -Wextra -Werror

CC = gcc

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

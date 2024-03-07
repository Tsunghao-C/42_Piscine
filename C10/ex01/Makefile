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

NAME = ft_cat

SRCS = srcs/ft_putstr.c \
       srcs/ft_orwc.c \
       srcs/ft_set_fd_out.c \
       srcs/ft_print_err.c \
       srcs/ft_rw.c \
       srcs/ft_strcmp.c \
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

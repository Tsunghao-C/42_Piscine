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

NAME = libft.a

SRCS = ./srcs/ft_putchar.c \
       ./srcs/ft_swap.c \
       ./srcs/ft_putstr.c \
       ./srcs/ft_strlen.c \
       ./srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

HEAD = /includes/ft.h

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEAD)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

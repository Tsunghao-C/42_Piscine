# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 11:25:55 by tsuchen           #+#    #+#              #
#    Updated: 2024/02/29 15:54:43 by tsuchen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm libft.a
find . -type f -name '*.c' -exec cc -c -Wall -Wextra -Werror {} \;
ar rc libft.a *.o
find . -type f -name '*.o' -delete 

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:16:23 by amsbai            #+#    #+#              #
#    Updated: 2025/02/05 23:59:30 by amsbai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  checkerror.c utils/ft_swap.c push_swap.c instractions/push.c instractions/reverse_rotate.c \
		instractions/rotate.c instractions/swap_stacks.c utils/ft_3twa.c mtfive.c utils/bubblesort.c \
		
OBJS = $(SRCS:.c=.o)
LIBFT = test/libft.a
HEADER = push_swap.h

# prerequisite
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LIBFT) -o $(NAME)
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean

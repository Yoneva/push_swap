# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:16:23 by amsbai            #+#    #+#              #
#    Updated: 2025/02/08 19:42:33 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  checkerror.c utils/ft_swap.c push_swap.c instractions/push.c instractions/reverse_rotate.c \
		instractions/rotate.c instractions/swap_stacks.c utils/ft_3twa.c mtfive.c utils/bubblesort.c \
		utils/index.c utils/ft_realloc.c
OBJS = $(SRCS:.c=.o)
LIBFT = libft/libft.a
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

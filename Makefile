# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:16:23 by amsbai            #+#    #+#              #
#    Updated: 2025/02/03 00:25:15 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  checkerror.c ft_swap.c push_swap.c push.c reverse_rotate.c \
		rotate.c swap_stacks.c ft_3twa.c mtfive.c
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

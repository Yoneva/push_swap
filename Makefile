# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:16:23 by amsbai            #+#    #+#              #
#    Updated: 2025/02/15 13:21:39 by amsbai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS_NAME = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror -g 
MANDATORY =  Mandatory/checkerror.c Mandatory/utils/ft_swap.c Mandatory/push_swap.c \
		Mandatory/instractions/push.c Mandatory/instractions/reverse_rotate.c \
		Mandatory/instractions/rotate.c Mandatory/instractions/swap_stacks.c \
		Mandatory/utils/ft_atol.c Mandatory/mtfive.c Mandatory/utils/bubblesort.c \
		Mandatory/utils/index.c Mandatory/utils/ft_realloc.c Mandatory/cases.c \
		Mandatory/utils/count_word.c Mandatory/utils/free.c Mandatory/is_correct.c
BONUS = Bonus/checker.c Bonus/compare.c Bonus/utils/ft_strcmp.c Bonus/get_next_line/get_next_line_utils.c\
		Bonus/get_next_line/get_next_line.c bonus/checkerror.c bonus/utils/ft_swap.c \
		bonus/instractions/push.c bonus/instractions/reverse_rotate.c \
		bonus/instractions/rotate.c bonus/instractions/swap_stacks.c \
		bonus/utils/ft_atol.c bonus/utils/bubblesort.c \
		bonus/utils/index.c bonus/utils/ft_realloc.c \
		bonus/utils/count_word.c bonus/utils/free.c bonus/is_correct.c

OBJS = $(MANDATORY:.c=.o)
OBJSBONUS = $(BONUS:.c=.o)
LIBFT = libft/libft.a
HEADER = Mandatory/push_swap.h

# prerequisite
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LIBFT) -o $(NAME)
	
.c.o: $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(OBJSBONUS)
	$(CC) $(OBJSBONUS) $(LIBFT) -o $(BONUS_NAME)
	
clean:
	rm -f $(OBJS) $(OBJSBONUS)
	
fclean: clean
	rm -f $(NAME) $(BONUS_NAME)

re: fclean all Bonus

.PHONY: clean

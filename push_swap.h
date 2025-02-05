/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:51:19 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/05 23:04:41 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "test/libft.h"

typedef struct s_two_stacks {
	long	*a;
	long	*b;
}	t_two_stacks;

int				main(int argc, char **argv);
long			*numbers(char **str, int len);
void			ft_swap(long *a, long *b);
long			*swap_stacks(long *stack, char c);
t_two_stacks	switch_stacks(t_two_stacks *both, char c, int i);
long			*rotate_stack(long *stack, int len, char c);
long			*reverse_rotate_stack(long *stack, int len, char c);
long			ft_3twa(const char *str);
t_two_stacks	return_to_a(t_two_stacks both, int len);
long			*bubble(long *stack, int len);

#endif
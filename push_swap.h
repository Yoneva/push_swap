/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:51:19 by amsbai            #+#    #+#             */
/*   Updated: 2025/01/13 20:06:15 by user             ###   ########.fr       */
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

//int				main(int argc, char **argv);
void			ft_swap(long *a, long *b);
long			*swap_stacks(long *stack, char c);
t_two_stacks	switch_stacks(t_two_stacks both, char c);
long			*rotate_stack(long *stack, int len, char c);
long			*reverse_rotate_stack(long *stack, int len, char c);

#endif
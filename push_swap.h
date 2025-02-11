/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:51:19 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/11 16:27:39 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "libft/libft.h"

typedef struct s_two_stacks {
	long	*a;
	long	*b;
	int a_size;
	int b_size;
}	t_two_stacks;

int				main(int argc, char **argv);
long	*numbers(char **str, int len);
void	ft_swap(long *a, long *b);
long	*swap_stacks(long *stack, char c);
void	switch_stacks(t_two_stacks *both, char c);
long			*rotate_stack(long *stack, int len, char c);
long			*reverse_rotate_stack(long *stack, int len, char c);
long			ft_3twa(const char *str);
void			return_to_a(t_two_stacks *both, int len);
void			mtfive(t_two_stacks *both, int len);
long			*bubble(long *stack, int len);
int				largest(long *stack, int len);
int				smallest(long *stack, int len);
void			*ft_realloc(void *str, size_t newsize);
void	if_five(t_two_stacks both);
void	if_four(t_two_stacks *both);
void	if_three(long *stack, int len);
void	if_more(t_two_stacks both, int len);

#endif
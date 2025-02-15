/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:57:08 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/13 11:41:50 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_three(long *stack, int len)
{
	if (stack[0] > stack[1] && stack[1] > stack[2])
	{
		swap_stacks(stack, 'a');
		reverse_rotate_stack(stack, len, 'a');
	}
	else if (stack[0] > stack[2] && stack[2] > stack[1])
		rotate_stack(stack, len, 'a');
	else if (stack[1] > stack[0] && stack[0] > stack[2])
		reverse_rotate_stack(stack, len, 'a');
	else if (stack[1] > stack[2] && stack[2] > stack[0])
	{
		swap_stacks(stack, 'a');
		rotate_stack(stack, len, 'a');
	}
	else if (stack[2] > stack[0] && stack[0] > stack[1])
		swap_stacks(stack, 'a');
}

void	if_four(t_two_stacks *both)
{
	int	i;

	i = smallest(both->a, both->a_size);
	while (both->a[0] != i)
	{
		reverse_rotate_stack(both->a, both->a_size, 'a');
	}
	switch_stacks(both, 'b');
	if_three(both->a, both->a_size);
	switch_stacks(both, 'a');
}

void	if_five(t_two_stacks *both)
{
	int	i;

	i = smallest(both->a, both->a_size);
	while (both->a[0] != i)
	{
		reverse_rotate_stack(both->a, both->a_size, 'a');
	}
	switch_stacks(both, 'b');
	if_four(both);
	switch_stacks(both, 'a');
	free(both->a);
}

void	if_more(t_two_stacks both, int len)
{
	mtfive(&both, len);
	return_to_a(&both, len);
	free(both.a);
}

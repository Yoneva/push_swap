/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtfive.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:38:52 by user              #+#    #+#             */
/*   Updated: 2025/02/13 14:46:14 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_in_range(long *sorted, int len, long value)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if (value == sorted[j])
		{
			return (j);
		}
		j++;
	}
	return (-1);
}

void	incrementer(int *start, int *end)
{
	(*start)++;
	(*end)++;
}

void	mtfive(t_two_stacks *both, int len)
{
	int		start;
	int		end;
	int		index;

	both->sorted = bubble(both->a, both->a_size);
	start = 0;
	end = 0.0375 * len + 11.25;
	while (both->a_size > 0)
	{
		index = if_in_range(both->sorted, len, both->a[0]);
		if (index >= start && index < end)
		{
			switch_stacks(both, 'b');
			incrementer(&start, &end);
		}
		else if (index < start)
		{
			switch_stacks(both, 'b');
			rotate_stack(both->b, both->b_size, 'b');
			incrementer(&start, &end);
		}
		else if (index >= end)
			rotate_stack(both->a, both->a_size, 'a');
	}
	free(both->sorted);
}

void	return_to_a(t_two_stacks *both, int len)
{
	int	large_index;

	while (both->a_size < len)
	{
		large_index = largest(both->b, both->b_size);
		while (both->b[0] != both->b[large_index])
		{
			if (large_index < both->b_size / 2)
				rotate_stack(both->b, both->b_size, 'b');
			else
				reverse_rotate_stack(both->b, both->b_size, 'b');
			large_index = largest(both->b, both->b_size);
		}
		switch_stacks(both, 'a');
	}
}

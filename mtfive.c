/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtfive.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:38:52 by user              #+#    #+#             */
/*   Updated: 2025/02/08 20:58:45 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long if_in_range(long *unsorted, int len)
{
    int j;
    long *sorted;
    long index;

    j = 0;
    index = 0;
    sorted = bubble(unsorted, len);
    while (j < len)
    {
        if (unsorted[0] == sorted[j])
        {
            index = j;
            break;
        }
        j++;
    }
    return (index);
}

void	mtfive(t_two_stacks both, int len)
{
    int remaining = len;
    long start = 0;
    long end = 15;
    long index;

    if (len > 100)
        end = 30;
    while (remaining > 0)
    {
        index = if_in_range(both.a + start, remaining);
        if (index > start && index < end)
        {
            switch_stacks(&both, 'b');
            start++;
            end++;
            remaining--;
        }
        else if (index <= start)
        {
            switch_stacks(&both, 'b');
            rotate_stack(both.b, remaining, 'b');
            start++;
            end++;
            remaining--;
        }
        else if (index >= end)
            rotate_stack(both.a, remaining, 'a');
    }
}

void return_to_a(t_two_stacks both, int len)
{
    int i;
    int large_index;
    int b_size = len;

    i = 0;
    while (i < len)
    {
        large_index = largest(both.b + i, b_size);
        while (both.b[0] != both.b[large_index])
        {
			if (large_index < b_size / 2)
                rotate_stack(both.b, b_size, 'b');
			else
				reverse_rotate_stack(both.b, b_size, 'b');
        }
        switch_stacks(&both, 'a');
		b_size--;
		i++;
	}
	rotate_stack(both.b, len, 'b');
    switch_stacks(&both, 'a');
}

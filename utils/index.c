/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:47:24 by user              #+#    #+#             */
/*   Updated: 2025/02/06 01:49:06 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	smallest(long *stack, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(j < len)
	{
		if(stack[i] > stack[j])
		{
			i = j;
			j = 0;
		}
		j++;
	}
	return (stack[i]);
}

int largest(long *stack, int len)
{
    int i;
    int j;
    long largest_value;

    i = 0;
    j = 1;
    largest_value = stack[0];
    while (j < len)
    {
        if (stack[j] > largest_value)
        {
            largest_value = stack[j];
            i = j;
        }
        j++;
    }
    return (i);
}
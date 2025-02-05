/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:03:58 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/06 00:02:45 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	*bubble(long *stack, int len)
{
	int	i;
	int	j;

	i = 0;
	while(i < len)
	{
		j = 0;
		while(j < len)
		{
			if(stack[i] < stack[j])
				ft_swap(&stack[i],&stack[j]);
			j++;
		}
		i++;
	}
	return (stack);
}
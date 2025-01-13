/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:07:14 by amsbai            #+#    #+#             */
/*   Updated: 2025/01/13 20:04:37 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long *reverse_rotate_stack(long *stack, int len, char c)
{
	while (len > 0)
	{
		ft_swap(&stack[len], &stack[len - 1]);
		len--;	
	}
	if (c == 'a')
		write(1, "rra\n", 3);
	else if(c == 'b')
		write(1, "rrb\n", 3);
	return (stack);
}
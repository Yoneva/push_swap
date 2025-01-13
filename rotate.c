/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:04:44 by amsbai            #+#    #+#             */
/*   Updated: 2025/01/13 19:11:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long *rotate_stack(long *stack, int len, char c)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		ft_swap(&stack[i], &stack[i + 1]);
		i++;
	}
	if (c == 'a')
		write(1, "sa\n", 3);
	else if(c == 'b')
		write(1, "sb\n", 3);
	return (stack);
}
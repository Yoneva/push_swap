/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:47:24 by user              #+#    #+#             */
/*   Updated: 2025/02/15 14:40:24 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	smallest(long *stack, int len)
{
	int		i;
	int		j;
	long	smallest_value;

	i = 0;
	j = 1;
	smallest_value = stack[0];
	while (j < len)
	{
		if (stack[j] < smallest_value)
		{
			smallest_value = stack[j];
			i = j;
		}
		j++;
	}
	return (smallest_value);
}

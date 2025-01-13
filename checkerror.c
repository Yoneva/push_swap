/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:12:05 by amsbai            #+#    #+#             */
/*   Updated: 2025/01/11 21:49:19 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	duplicate_check(long *str, int nbr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if(str[i] == nbr)
			return (1);
		i++;
	}
	return (0);
}

int *numbers(long *taba, char **str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		taba[i] = ft_atoi(str[i + 1]);
		if(duplicate_check(taba, taba[i], i + 1) || !taba[i] || taba[i] > INT_MAX || taba[i] < INT_MIN)
		{
			free(taba);
			write(1, "ERROR\n", 6);
			return 0;
		}
		i++;
	}
}
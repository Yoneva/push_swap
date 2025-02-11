/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:12:05 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/11 13:36:47 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicate_check(long *str, int nbr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == nbr)
			return (1);
		i++;
	}
	return (0);
}

long *numbers(char **str, int len)
{
	int				i;
	int				j;
	t_two_stacks	both;
	
	both.a = malloc(sizeof(long) * len);
	both.a_size = len;
	both.b = ft_calloc(0,0);
	both.b_size = 0;
	i = 1;
	j = 0;
	while (j < len)
	{
		both.a[j] = ft_3twa(str[i]);
		if(both.a[j] > INT_MAX || both.a[j] < INT_MIN)
		{
			free(both.a);
			free(both.b);
			write(1, "ERROR\n", 6);
			return (0);
		}
		i++;
		j++;
	}
	if (len == 2)
		return (swap_stacks(both.a,'a'));
	else if (len == 3)
		if_three(both.a,len);
	else if (len == 4)
		if_four(&both);
	else if (len == 5)
	{
		if_five(both);
	}
	else if (len > 5)
	{
		if_more(both,len);
	}
	return (0);
}

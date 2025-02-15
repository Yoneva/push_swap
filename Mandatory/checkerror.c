/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:12:05 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/13 11:43:43 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_a(t_two_stacks *both, long nbr)
{
	static int	i;

	both->a = ft_realloc(both->a, i + 1);
	if (!both->a)
		return ;
	both->a[i] = nbr;
	both->a_size += 1;
	i += 1;
}

void	lenghts(t_two_stacks both, int len)
{
	if (len == 2)
	{
		swap_stacks(both.a, 'a');
		free(both.a);
	}
	else if (len == 3)
	{
		if_three(both.a, len);
		free(both.a);
	}
	else if (len == 4)
	{
		if_four(&both);
		free(both.a);
	}
	else if (len == 5)
	{
		if_five(&both);
	}
	else if (len > 5)
	{
		if_more(both, len);
	}
}

void	error(t_two_stacks *both, char **str)
{
	free(both->a);
	free(both->b);
	freeing(str);
	write(1, "ERROR\n", 6);
	exit(1);
}

void	numbers(char **str, int len, t_two_stacks *both)
{
	int		i;
	int		j;
	char	**splited;
	long	nbr;

	i = 1;
	while (i < len)
	{
		j = 0;
		splited = ft_split(str[i], ' ');
		while (splited[j])
		{
			nbr = ft_atol(splited[j]);
			if (valid_nbr(splited[j]) == 1)
				error(both, splited);
			if (nbr > INT_MAX || nbr < INT_MIN)
				error(both, splited);
			if (duplicate_check(both->a, nbr, both->a_size) == 1)
				error(both, splited);
			fill_stack_a(both, nbr);
			j++;
		}
		freeing(splited);
		i++;
	}
}

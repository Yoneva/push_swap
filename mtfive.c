/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtfive.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:38:52 by user              #+#    #+#             */
/*   Updated: 2025/02/06 00:06:20 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	if_in_range(long	*unsorted, int len)
{
	int j;
	long *sorted;

	j = 0;
	sorted = bubble(unsorted,len);
	while(unsorted[0] != sorted[j])
	{
		j++;
	}
	return (j);
}

t_two_stacks	mtfive(t_two_stacks both, int len)
{
	int	i;
	long	start;
	long	end;
	long	index;

	i = 0;
	start = 0;
	end = 15;
	if(len > 100)
		end = 30;
	while(i < len)
	{
		index = if_in_range(both.a + i,len);
		if(index <= start)
		{
			switch_stacks(&both,'b',i);
			rotate_stack(both.a + i,len,'a');
			start++;
			end++;
		}
		else if (index > start && index < end)
		{
			switch_stacks(&both,'b',i);
			rotate_stack(both.b,len,'b');
			start++;
			end++;
		}
		else if(index > end)
			rotate_stack(both.a + i,len,'a');
		i++;
	}
	return (both);
}

int	largest(long *stack, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(j < len)
	{
		if(stack[i] < stack[j])
		{
			i = j;
			j = 0;
		}
		j++;
	}
	return (stack[i]);
}

t_two_stacks return_to_a(t_two_stacks both, int len)
{
	int i;
	int large;

	i = 0;
	both = mtfive(both,len);
	while(i < len)
	{
		large = largest(both.b + i,len);
		while(both.b[0] != both.b[large])
		{
			if(large < len / 2)
				rotate_stack(both.b,len,'b');
			else
				reverse_rotate_stack(both.b,len,'b');
		}
		switch_stacks(&both,'a',i);
	}
	return both;
}


// int main()
// {
// 	long s[] = {5, 2, 3, 4, 1, 0};
// 	int i = 0;

// 	bubble(s,6);
// 	while(i < 6)
// 	{
// 		printf("%lu\n",s[i]);
// 		i++;
// 	}
// 	return 0;
// }
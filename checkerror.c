/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:12:05 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/03 00:27:15 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
long	*if_three(long *stack, int len)
{
    if (stack[0] > stack[1] && stack[1] > stack[2])
	{
        swap_stacks(stack, 'a');
        reverse_rotate_stack(stack, len, 'a');
	}
    else if (stack[0] > stack[2] && stack[2] > stack[1])
        rotate_stack(stack, len, 'a');
    else if (stack[1] > stack[0] && stack[0] > stack[2])
        reverse_rotate_stack(stack, len, 'a');
    else if (stack[1] > stack[2] && stack[2] > stack[0])
	{
        swap_stacks(stack, 'a');
        rotate_stack(stack, len, 'a');
	}
    else if (stack[2] > stack[0] && stack[0] > stack[1])
        swap_stacks(stack, 'a');
	return (stack);
}
t_two_stacks	if_four(long *a, long *b, int len)
{
	t_two_stacks stack;
	int	i;

	stack.a = a;
	stack.b = b;
	i = smallest(stack.a, len);
	while(stack.a[0] != i)
	{
		reverse_rotate_stack(stack.a,len,'a');
	}
	switch_stacks(&stack,'b');
	if_three(stack.a + 1, len - 1);
	switch_stacks(&stack,'a');
	return (stack);
}

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


long *numbers(char **str, int len)
{
	int				i;
	int				j;
	t_two_stacks	both;
	
	both.a = malloc(sizeof(long) * len);
	both.b = malloc(sizeof(long) * len);
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
		return (if_three(both.a,len));
	else if (len == 4)
		if_four(both.a,both.b,len);
	else if (len == 5)
	{
		i = smallest(both.a, len);
		while(both.a[0] != i)
		{
			reverse_rotate_stack(both.a,len,'a');
		}
		switch_stacks(&both,'b');
		if_four(both.a + 1,both.b + 1, len - 1);
		switch_stacks(&both,'a');
	}
	else if (len > 5)
	{
		if(len <= 100)// 0 - 15 -> 100
			mtfive(both,len);
		else if(len <= 500)// 0 - 30 -> 500
			mtfive(both,len);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:36:03 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/13 14:44:22 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	incrementer(int *a_size, int *b_size, char c)
{
	if (c == 'a')
	{
		(*a_size)++;
		(*b_size)--;
	}
	else if (c == 'b')
	{
		(*a_size)--;
		(*b_size)++;
	}
}

void	switch_stacks(t_two_stacks *both, char c)
{
	if (c == 'b' && both->a_size > 0)
	{
		both->b = ft_realloc(both->b, (both->b_size + 1));
		if (!both->b)
			return ;
		ft_memmove(&both->b[1], &both->b[0], both->b_size * sizeof(long));
		both->b[0] = both->a[0];
		ft_memmove(&both->a[0], &both->a[1], (both->a_size - 1) * sizeof(long));
		incrementer(&both->a_size, &both->b_size, c);
		both->a = ft_realloc(both->a, both->a_size);
		write(1, "pb\n", 3);
	}
	else if (c == 'a' && both->b_size > 0)
	{
		both->a = ft_realloc(both->a, (both->a_size + 1));
		if (!both->a)
			return ;
		ft_memmove(&both->a[1], &both->a[0], both->a_size * sizeof(long));
		both->a[0] = both->b[0];
		ft_memmove(&both->b[0], &both->b[1], (both->b_size - 1) * sizeof(long));
		incrementer(&both->a_size, &both->b_size, c);
		both->b = ft_realloc(both->b, both->b_size);
		write(1, "pa\n", 3);
	}
}

// int main()
// {
// 	t_two_stacks hh;
// 	long *a;
// 	long *b;
// 	b = malloc(2 * sizeof(long));
// 	a = malloc(4* sizeof(long));
// 	b[0] = 9;
// 	b[1] = 12;
// 	a[0] = 1;
// 	a[1] = 2;
// 	a[2] = 3;
// 	a[3] = 4;

// 	hh.a = a;
// 	hh.b = b;
// 	hh.a_size = 4;
// 	hh.b_size = 2;

// 	switch_stacks(&hh,'a');
// 	// printf("------%lu\n", hh.b[1]);
// 	int i = 0;
// 	printf("Stack A:\n");
//     while(i < hh.a_size)
//     {
//         printf("a[%d] = %lu\n", i, hh.a[i]);
//         i++;
//     }
//     i = 0;
//     printf("Stack B:\n");
//     while(i < hh.b_size)
//     {
//         printf("b[%d] = %lu\n", i, hh.b[i]);
//         i++;
//     }
// 	return 0;
// }
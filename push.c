/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:36:03 by amsbai            #+#    #+#             */
/*   Updated: 2025/01/21 21:11:02 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_two_stacks switch_stacks(t_two_stacks *both, char c)
{
	ft_swap(&both->a[0],&both->b[0]);
	if (c == 'a')
		write (1, "pa\n", 3);
	else if (c == 'b')
		write (1, "pb\n", 3);
	return (*both);
}

// int main()
// {
// 	t_two_stacks hh;
	
// 	long a[] = {1, 2, 3, 4};
// 	long b[4];
// 	hh.a = a;
// 	hh.b = b;

// 	long *res;
// 	hh = switch_stacks(hh,'b');
// 	int i = 0;
// 	while(i < 4)
// 	{
// 		printf("a = %lu , b = %lu\n", hh.a[i], hh.b[i]);
// 		i++;
// 	}
// 	return 0;
// }
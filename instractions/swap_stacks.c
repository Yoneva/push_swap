/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:29:59 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/11 13:33:46 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	*swap_stacks(long *stack, char c)
{
	ft_swap(&stack[0], &stack[1]);
	if (c == 'a')
		write(1, "sa\n", 3);
	else if(c == 'b')
		write(1, "sb\n", 3);
	return (stack);
}
// int main()
// {
// 	long *st;;

// 	st = malloc(4);
// 	st[0] = 1;
// 	st[1] = 2;
// 	st[2] = 3;
// 	st[3] = 4;
	
// 	swap_stacks(st,'b');
// 	int i = 0;
// 	while(i < 4)
// 	{
// 		printf("%lu\n", st[i]);
// 		i++;
// 	}
// 	return 0;
// }
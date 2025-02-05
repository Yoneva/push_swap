/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:07:14 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/06 00:03:08 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long *reverse_rotate_stack(long *stack, int len, char c)
{
	while (len - 1 > 0)
	{
		ft_swap(&stack[len - 1], &stack[len - 2]);
		len--;	
	}
	if (c == 'a')
		write(1, "rra\n", 4);
	else if(c == 'b')
		write(1, "rrb\n", 4);
	return (stack);
}

// int main()
// {
// 	long st[] = {1,2,3,4};

// 	long *res;
// 	res = reverse_rotate_stack(st,4,'b');
// 	int i = 0;
// 	while(i < 4)
// 	{
// 		printf("%lu\n", res[i]);
// 		i++;
// 	}
// 	return 0;
// }
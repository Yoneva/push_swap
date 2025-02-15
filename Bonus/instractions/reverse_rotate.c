/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:07:14 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/15 12:43:01 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

long	*reverse_rotate_stack(long *stack, int len)
{
	while (len - 1 > 0)
	{
		ft_swap(&stack[len - 1], &stack[len - 2]);
		len--;
	}
	return (stack);
}

// int main()
// {
// 	long *st;

// 	st = malloc(10 * sizeof(long));
// 	st[0] = 1;
// 	st[1] = 2;
// 	st[2] = 3;
// 	st[3] = 4;
// 	st[4] = 5;
// 	st[5] = 6;
// 	st[6] = 7;
// 	st[7] = 8;
// 	st[8] = 9;
// 	st[9] = 10;

// 	reverse_rotate_stack(st,10,'b');
// 	int i = 0;
// 	while(i < 10)
// 	{
// 		printf("%lu\n", st[i]);
// 		i++;
// 	}
// 	return 0;
// }
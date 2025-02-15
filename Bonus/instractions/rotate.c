/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:04:44 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/15 12:43:05 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

long	*rotate_stack(long *stack, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		ft_swap(&stack[i], &stack[i + 1]);
		i++;
	}
	return (stack);
}

// int main()
// {
// 	long *st;

// 	st = malloc(4);
// 	st[0] = 1;
// 	st[1] = 2;
// 	st[2] = 3;
// 	st[3] = 4;

// 	rotate_stack(st,4,'b');
// 	int i = 0;
// 	while(i < 4)
// 	{
// 		printf("%lu\n", st[i]);
// 		i++;
// 	}
// 	return 0;
// }
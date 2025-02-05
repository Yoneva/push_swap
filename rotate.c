/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:04:44 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/03 00:37:06 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long *rotate_stack(long *stack, int len, char c)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		ft_swap(&stack[i], &stack[i + 1]);
		i++;
	}
	if (c == 'a')
		write(1, "ra\n", 3);
	else if(c == 'b')
		write(1, "rb\n", 3);
	return (stack);
}

// int main()
// {
// 	long st[] = {1,2,3,4};

// 	long *res;
// 	res = rotate_stack(st,4,'b');
// 	int i = 0;
// 	while(i < 4)
// 	{
// 		printf("%lu\n", res[i]);
// 		i++;
// 	}
// 	return 0;
// }
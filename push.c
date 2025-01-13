/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:36:03 by amsbai            #+#    #+#             */
/*   Updated: 2025/01/13 20:05:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_two_stacks switch_stacks(t_two_stacks both, char c)
{
	ft_swap(&both.a[0],&both.b[0]);
	if (c == 'a')
		write (1, "sa\n", 3);
	else if (c == 'a')
		write (1, "sb\n", 3);
	return (both);
}
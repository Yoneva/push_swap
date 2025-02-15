/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:14:19 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/13 11:46:47 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void leaks()
// {
// 	system("leaks push_swap");
// }
//atexit(leaks);
int	main(int argc, char **argv)
{
	t_two_stacks	both;

	both.a_size = 0;
	both.b_size = 0;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
	{
		write(1, "ERROR!\n", 7);
		return (0);
	}
	numbers(argv, argc, &both);
	lenghts(both, both.a_size);
	return (0);
}

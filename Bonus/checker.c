/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:32:35 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/15 14:35:21 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

// void leaks()
// {
// 	system("leaks checker");
// }
// atexit(leaks);
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
	read_output(&both);
}

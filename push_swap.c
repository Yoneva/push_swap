/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:14:19 by amsbai            #+#    #+#             */
/*   Updated: 2025/01/30 04:23:10 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int check_len(int argc, char  *argv[])
// {
// 	// int	i;
	
// 	// i = 0;
// 	if (argv[1] == NULL)
// 	{
// 		return 0;
// 	}
// 	if (argc == 2)
// 	{
// 		argv = ft_split(argv[1], ' ');	
// 	}
// }
int main(int argc, char **argv)
{
	// int i;
	// int	j;
	// int a = argc;
	// int nbrs[argc - 1];
	if (argc <= 1)
	{
		write(1, "ERROR!\n", 7);
		return 0;
	}
	while (argc > 1)
	{
		//printf("A\n");
		numbers(argv,argc - 1);
		break;
	}
	return 0;
}
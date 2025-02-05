/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:14:19 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/05 22:57:42 by amsbai           ###   ########.fr       */
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
	// int i = 0;
	// int	*tab;
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
	// while(i < argc)
	// {
	// 	printf("%d\n", argv[i]);
	// 	i++;
	// }
	return 0;
}
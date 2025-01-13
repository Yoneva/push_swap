/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:14:19 by amsbai            #+#    #+#             */
/*   Updated: 2025/01/11 21:18:21 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "test/libft.h"
#include <stdio.h>

int main(int argc, char  *argv[])
{
	t_two_stacks both;
	
	both.a = NULL;
	both.b = NULL;
	if (argc == 1 || (argc == 2 && argv[1] == NULL))
	{
		return 0;
	}
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');	
	}
	
}
// int main(int argc, char **argv)
// {
// 	int i;
// 	int	j;
// 	int a = argc;
// 	int nbrs[argc - 1];

// 	if (argc <= 1)
// 	{
// 		write(1, "ERROR!\n", 7);
// 		return 0;
// 	}
// 	j = 1;
// 	i = 0;
// 	while (argc > 1)
// 	{
// 		nbrs[i] = ft_atoi(argv[j]);
// 		i++;
// 		j++;
// 		argc--;
// 	}
// 	i = 0;
// 	j = i + 1;
// 	while(i < a - 1)
// 	{
// 		if (nbrs[i] < nbrs[j])
// 		{
// 			ft_swap(&nbrs[i],&nbrs[j]);
// 		}
// 		printf("%d\n", nbrs[i]);
// 		i++;
// 		j++;
// 	}
// 	return 0;
// }
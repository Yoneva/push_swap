/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:14:19 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/08 19:45:12 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		write(1, "ERROR!\n", 7);
		return 0;
	}
	while (argc > 1)
	{
		numbers(argv,argc - 1);
		break;
	}
	return 0;
}
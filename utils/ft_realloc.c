/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:37:24 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/06 00:02:36 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	*ft_realloc(void *ptr, size_t size)
// {
	
// }

int main()
{
	int *tab;
	int i = 0;

	tab = malloc(5*sizeof(int));
	while(i < 5)
	{
		tab[i] = i;
		//printf("%d\n", tab[i]);
		i++;
	}
	tab = realloc(tab,2);
	i = 0;
	while(i < 2)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
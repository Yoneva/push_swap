/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:03:58 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/11 16:27:56 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	*bubble(long *stack, int len)
{
	long	*tmp;
	int		i;
	int		j;
	
	i = 0;
	tmp = malloc(len * sizeof(long));
	if(!tmp)
		return NULL;
	ft_memcpy(tmp, stack,len*sizeof(long));
	while(i < len)
	{
		j = 0;
		while (j < len)
		{
			if(tmp[i] < tmp[j])
				ft_swap(&tmp[i],&tmp[j]);
			j++;
		}
		i++;
	}
	return (tmp);
}

// int main()
// {
//     long stack[] = {72, 54, 18, 93, 31, 40, 29, 88, 51, 77, 66, 3, 55, 16, 59, 41, 74, 36, 39, 82};
//     int len = sizeof(stack) / sizeof(stack[0]);
    
//     // Call the bubble sort function
//     long *sorted_stack = bubble(stack, len);
    
//     if (sorted_stack == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     // Print the sorted stack
//     printf("Sorted stack: ");
//     for (int i = 0; i < len; i++) {
//         printf("%ld ", sorted_stack[i]);
//     }
//     printf("\n");

//     // Free the allocated memory for sorted stack
//     free(sorted_stack);

//     return 0;
// }

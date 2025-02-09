/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:37:24 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/07 20:13:04 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_realloc(void *str, size_t newsize)
{
	char	*newptr;
	size_t	cursize;

	if (str == 0)
		return (malloc(newsize));
	cursize = sizeof(str);
	if (newsize <= cursize)
		return (str);
	newptr = malloc(newsize);
	ft_memcpy(str, newptr, cursize);
	free(str);
	return (newptr);
}
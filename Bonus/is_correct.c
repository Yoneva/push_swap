/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_correct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:10:06 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/15 12:46:47 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	duplicate_check(long *tab, long nbr, int len)
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	while (i < len)
	{
		if (tab[i] == nbr)
			return (1);
		i++;
	}
	return (0);
}

int	valid_nbr(const char *tab)
{
	int	i;

	i = 0;
	if ((tab[i] == '+' || tab[i] == '-') && tab[i + 1] != '\0')
		i++;
	while (tab[i])
	{
		if (!ft_isdigit(tab[i]))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

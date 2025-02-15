/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:28:13 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/15 14:33:12 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] || b[i])
	{
		if (a[i] != b[i])
			break ;
		i++;
	}
	return (a[i] - b[i]);
}

// int main()
// {
// 	printf("%d\n", ft_strcmp("amala","amal"));
// }
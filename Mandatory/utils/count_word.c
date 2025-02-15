/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:37:16 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/15 14:38:59 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_word(char const *str, char sep)
{
	int		i;
	int		count;
	int		flag;

	i = 0;
	flag = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == sep)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}

// #include <stdio.h>

// int	count_word(char const *str, char sep);

// int main()
// {
// 	char *test1 = "Hello world! This is a test.";
// 	char *test2 = "  Split  this sentence  correctly. ";
// 	char *test3 = "OnlyOneWord";
// 	char *test4 = ";;;;;Separated;;;;By;;;;Semicolons;";
// 	char *test5 = "";

// 	printf("Test 1: %d words\n", count_word(test1, ' ')); // Expected: 5
// 	printf("Test 2: %d words\n", count_word(test2, ' ')); // Expected: 4
// 	printf("Test 3: %d words\n", count_word(test3, ' ')); // Expected: 1
// 	printf("Test 4: %d words\n", count_word(test4, ';')); // Expected: 4
// 	printf("Test 5: %d words\n", count_word(test5, ' ')); // Expected: 0

// 	return 0;
// }

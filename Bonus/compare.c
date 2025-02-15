/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:49:17 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/15 14:34:42 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	compare_strings_2(char *str, t_two_stacks *both)
{
	if (ft_strcmp(str, "ra\n") == 0)
		rotate_stack(both->a, both->a_size);
	else if (ft_strcmp(str, "rb\n") == 0)
		rotate_stack(both->b, both->b_size);
	else if (ft_strcmp(str, "rr\n") == 0)
	{
		rotate_stack(both->a, both->a_size);
		rotate_stack(both->b, both->b_size);
	}
	else
	{
		write(1, "Error\n", 6);
		free(both->a);
		free(both->b);
		exit(1);
	}
}

void	compare_strings(char *str, t_two_stacks *both)
{
	if (ft_strcmp(str, "rra\n") == 0)
		reverse_rotate_stack(both->a, both->a_size);
	else if (ft_strcmp(str, "rrb\n") == 0)
		reverse_rotate_stack(both->b, both->b_size);
	else if (ft_strcmp(str, "rrr\n") == 0)
	{
		reverse_rotate_stack(both->a, both->a_size);
		reverse_rotate_stack(both->b, both->b_size);
	}
	else if (ft_strcmp(str, "sa\n") == 0)
		swap_stacks(both->a);
	else if (ft_strcmp(str, "sb\n") == 0)
		swap_stacks(both->b);
	else if (ft_strcmp(str, "ss\n") == 0)
	{
		swap_stacks(both->a);
		swap_stacks(both->b);
	}
	else if (ft_strcmp(str, "pa\n") == 0)
		switch_stacks(both, 'a');
	else if (ft_strcmp(str, "pb\n") == 0)
		switch_stacks(both, 'b');
	else
		compare_strings_2(str, both);
}

void	read_output(t_two_stacks *both)
{
	char	*line;
	long	*sorted;
	int		i;

	i = 0;
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		compare_strings(line, both);
		free(line);
	}
	sorted = bubble(both->a, both->a_size);
	if (ft_memcmp(sorted, both->a, both->a_size * sizeof(long)) == 0)
		write(1, "OK\n", 3);
	else if (ft_memcmp(sorted, both->a, both->a_size * sizeof(long)) != 0)
		write(1, "KO\n", 3);
	free(both->a);
	free(sorted);
}

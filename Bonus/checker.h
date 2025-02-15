/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:42:17 by amsbai            #+#    #+#             */
/*   Updated: 2025/02/15 14:41:28 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"
# include <limits.h>
# include "get_next_line/get_next_line.h"

typedef struct s_two_stacks
{
	long	*a;
	long	*b;
	int		a_size;
	int		b_size;
	long	*sorted;
}	t_two_stacks;

int		main(int argc, char **argv);
void	numbers(char **str, int len, t_two_stacks *both);
void	ft_swap(long *a, long *b);
long	*swap_stacks(long *stack);
void	switch_stacks(t_two_stacks *both, char c);
long	*rotate_stack(long *stack, int len);
long	*reverse_rotate_stack(long *stack, int len);
long	ft_atol(const char *str);
long	*bubble(long *stack, int len);
int		smallest(long *stack, int len);
void	*ft_realloc(void *str, size_t newsize);
int		count_word(char const *str, char sep);
void	*freeing(char **arr);
int		valid_nbr(const char *tab);
int		duplicate_check(long *tab, long nbr, int len);
void	lenghts(t_two_stacks both, int len);
void	read_output(t_two_stacks *both);
int		ft_strcmp(char *a, char *b);

#endif
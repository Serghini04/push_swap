/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:14:57 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/28 18:15:50 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_instra(char *str, t_list **s_a, t_list **s_b)
{
	if (!ft_strcmp(str, "pa\n"))
		pa(s_a, s_b, 0);
	else if (!ft_strcmp(str, "pb\n"))
		pb(s_a, s_b, 0);
	else if (!ft_strcmp(str, "sa\n"))
		sa(s_a, 0);
	else if (!ft_strcmp(str, "sb\n"))
		sb(s_b, 0);
	else if (!ft_strcmp(str, "ra\n"))
		ra(s_a, 0);
	else if (!ft_strcmp(str, "rb\n"))
		rb(s_b, 0);
	else if (!ft_strcmp(str, "rr\n"))
		rr(s_a, s_b, 0);
	else if (!ft_strcmp(str, "rra\n"))
		rra(s_a, 0);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb(s_b, 0);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr(s_a, s_b, 0);
	else if (!ft_strcmp(str, "ss\n"))
		ss(s_a, s_b, 0);
	else
		return (0);
	return (1);
}


int main(int ac, char **av)
{
	t_list	*s_a;
	t_list	*s_b;
	char	*instra;
	int		i;

	i = 1;
	s_a = NULL;
	s_b = NULL;
	if (ac == 1)
		return (0);
	while (i < ac)
	{
		if (parsing(av[i], &s_a) == 0)
			(write(2, "Error\n", 6), exit(-1));
		i++;
	}
	if (!s_a || check_d(s_a) == 0)
		(write(2, "Error\n", 6), clr_all(&s_a), exit(-1));
	while (1)
	{
		instra = get_next_line(0);
		if (!instra)
			break;
		if (check_instra(instra, &s_a, &s_b) == 0)
			(write(2, "Error\n", 6), exit(-1));
		free(instra);
	}
	if (!s_b && if_sorted(s_a) == 1)
			write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	clr_all(&s_a);
	clr_all(&s_b);
	return (0);
}

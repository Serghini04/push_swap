/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:14:57 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/29 21:15:15 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	usage_instra(t_instra **h, t_list **s_a, t_list **s_b)
{
	t_instra	*str;

	str = *h;
	while (str)
	{
		if (!ft_strcmp(str->data, "pa\n"))
			pa(s_a, s_b, 0);
		else if (!ft_strcmp(str->data, "pb\n"))
			pb(s_a, s_b, 0);
		else if (!ft_strcmp(str->data, "sa\n"))
			sa(s_a, 0);
		else if (!ft_strcmp(str->data, "sb\n"))
			sb(s_b, 0);
		else if (!ft_strcmp(str->data, "ra\n"))
			ra(s_a, 0);
		else if (!ft_strcmp(str->data, "rb\n"))
			rb(s_b, 0);
		else if (!ft_strcmp(str->data, "rr\n"))
			rr(s_a, s_b, 0);
		else if (!ft_strcmp(str->data, "rra\n"))
			rra(s_a, 0);
		else if (!ft_strcmp(str->data, "rrb\n"))
			rrb(s_b, 0);
		else if (!ft_strcmp(str->data, "rrr\n"))
			rrr(s_a, s_b, 0);
		else if (!ft_strcmp(str->data, "ss\n"))
			ss(s_a, s_b, 0);
		else
			return (0);
		str = str->next;
	}
	return (1);
}

int main(int ac, char **av)
{
	t_list		*s_a;
	t_list		*s_b;
	t_instra	*h_ins;
	char		*instra;
	int			i;

	i = 1;
	s_a = NULL;
	s_b = NULL;
	h_ins = NULL;
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
		add_back_instra(&h_ins, new_instra(instra));
	}
	if (usage_instra(&h_ins, &s_a, &s_b) == 0)
			(write(2, "Error\n", 6), exit(-1));
	if (!s_b && if_sorted(s_a) == 1)
			write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	clr_all(&s_a);
	clr_all(&s_b);
	clr_instra(&h_ins);
	return (0);
}

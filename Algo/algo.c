/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:11:02 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/28 17:22:13 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ltaht(t_list *s_b, int pos)
{
	int	s;

	s = size_lst(s_b) / 2;
	while (s)
	{
		if (s_b->i == pos)
			return (0);
		s_b = s_b->next;
		s--;
	}
	return (1);
}

void	update(t_list **s_a, int *lv1, int *v1, int *v2)
{
	*lv1 = *v1;
	*v2 = (size_lst(*s_a) / 6) + *v1;
	*v1 += (size_lst(*s_a) / 3);
}

void	master_algo(t_list **s_a, t_list **s_b)
{
	int	v1;
	int	v2;
	int	lv1;

	lv1 = -1;
	v1 = 0;
	v2 = size_lst(*s_a) / 6;
	v1 = size_lst(*s_a) / 3;
	while (size_lst(*s_a) > 3)
	{
		if (size_lst(*s_b) > 1 && (*s_b)->i < v2 \
						&& (*s_b)->i > lv1 && (*s_a)->i >= v1)
			rr(s_a, s_b, 1);
		else if (size_lst(*s_b) > 1 && (*s_b)->i < v2 && (*s_b)->i > lv1)
			rb(s_b, 1);
		if ((*s_a)->i < v1)
			pb(s_a, s_b, 1);
		else
			ra(s_a, 1);
		if (size_lst(*s_b) == v1)
			update(s_a, &lv1, &v1, &v2);
	}
}

void	finito(t_list **s_a, t_list **s_b)
{
	int	v;

	v = 0;
	while (size_lst(*s_b))
	{
		if ((*s_a)->i - 1 == (*s_b)->i)
			pa(s_a, s_b, 1);
		else if (last_lst(*s_b)->i == (*s_a)->i - 1)
			(rrb(s_b, 1), pa(s_a, s_b, 1));
		else if (!v)
			(pa(s_a, s_b, 1), ra(s_a, 1), v++);
		else if (last_lst(*s_a)->i == (*s_a)->i - 1)
			(rra(s_a, 1), v--);
		else if (last_lst(*s_a)->i < (*s_b)->i)
			(pa(s_a, s_b, 1), ra(s_a, 1), v++);
		else if (last_lst(*s_a)->i < last_lst(*s_b)->i)
			(rrb(s_b, 1), pa(s_a, s_b, 1), ra(s_a, 1), v++);
		else
		{
			if (ltaht(*s_b, (*s_a)->i - 1) == 1)
				rrb(s_b, 1);
			else
				rb(s_b, 1);
		}
	}
}

void	algo(t_list **s_a, t_list **s_b, int size)
{
	part_index(s_a);
	if (size == 2)
		sa(s_a, 1);
	else if (size == 3)
		algo3(s_a);
	else if (size == 4)
		algo4(s_a, s_b);
	else if (size == 5)
		algo5(s_a, s_b);
	else
	{
		master_algo(s_a, s_b);
		algo3(s_a);
		finito(s_a, s_b);
		while ((*s_a)->i - 1 == last_lst(*s_a)->i)
			rra(s_a, 1);
	}
}

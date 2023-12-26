/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:11:02 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/26 22:50:14 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo3(t_list **h)
{
	t_list *top = *h;
	t_list *last= (*h)->next->next;
	if (top->data > top->next->data && top->data > last->data)
	{
		ra(h);
		top = *h;
	}
	else if (top->next->data > top->data && top->next->data > last->data)
	{
		rra(h);
		top = *h;
	}
	if (top->data > top->next->data)
		sa(h);
}

void	algo4(t_list **s_a, t_list **s_b)
{
	part_index(s_a);
	while ((*s_a)->i != 0)
		ra(s_a);
	pb(s_a, s_b);
	algo3(s_a);
	pa(s_a, s_b);
}

void	algo5(t_list **s_a, t_list **s_b)
{
	if (!s_a || !s_b)
		return ;
	if ((*s_a)->next->i == 0)
		sa(s_a);
	else
	{
		while ((*s_a)->i != 0)
			rra(s_a);
	}
	pb(s_a, s_b);
	algo4(s_a, s_b);
	pa(s_a, s_b);
}
void	master_algo(t_list **s_a, t_list **s_b)
{
	int v1 = 0;
	int v2;
	int lv1 = -1;
	v2 = size_lst(*s_a) / 6;
	v1 = size_lst(*s_a) / 3;
	while(size_lst(*s_a) > 3)
	{
		if (size_lst(*s_b) > 1 && (*s_b)->i < v2 && (*s_b)->i > lv1 && (*s_a)->i >= v1)
			rr(s_a, s_b);
		else if (size_lst(*s_b) > 1 && (*s_b)->i < v2 && (*s_b)->i > lv1)
			rb(s_b);
		if ((*s_a)->i < v1)
			pb(s_a, s_b);
		else
			ra(s_a);
		if (size_lst(*s_b) == v1)
		{
			lv1 = v1;
			v2 = (size_lst(*s_a) / 6) + v1;
			v1 += (size_lst(*s_a) / 3);
		}
	}
}

void	finito(t_list **s_a, t_list **s_b)
{
	int v = 0;
	while (size_lst(*s_b))
	{
		if ((*s_a)->i - 1 == (*s_b)->i)
			pa(s_a, s_b);
		else if (last_lst(*s_b)->i == (*s_a)->i - 1)
		{
			rrb(s_b);
			pa(s_a, s_b);
		}
		else if (!v)
		{
			pa(s_a, s_b);
			ra(s_a);
			v++;
		}
		else if (last_lst(*s_a)->i == (*s_a)->i - 1)
		{
			rra(s_a);
			v--;
		}
		else if (last_lst(*s_a)->i < (*s_b)->i)
		{
			pa(s_a, s_b);
			ra(s_a);
			v++;
		}
		else if (last_lst(*s_a)->i < last_lst(*s_b)->i)
		{
			rrb(s_b);
			pa(s_a, s_b);
			ra(s_a);
			v++;
		}
		else
		{
			if (ltaht(*s_b, (*s_a)->i - 1) == 1)
					rrb(s_b);
			else
					rb(s_b);
		}
	}
}

void algo(t_list **s_a, t_list **s_b, int size)
{
	part_index(s_a);
	if (size == 2)
		return sa(s_a);
	else if (size == 3)
		return algo3(s_a);
	else if (size == 4)
		return algo4(s_a, s_b);
	else if (size == 5)
		return algo5(s_a, s_b);
	else
		master_algo(s_a, s_b);
	algo3(s_a);
	finito(s_a, s_b);
	while ((*s_a)->i - 1 == last_lst(*s_a)->i)
		rra(s_a);
}

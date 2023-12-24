/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:11:02 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/23 21:11:32 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo3(t_list **head)
{
	part_index(head);
	if ((*head)->i == 0 && (*head)->next->i == 1 && (*head)->next->next->i == 2)
		return ;
	if ((*head)->i == 0)
	{
		sa(head);
		ra(head);
	}
	else if ((*head)->i == 1)
	{
		if ((*head)->next->i == 0)
			sa(head);
		else
			rra(head);
	}
	else if ((*head)->i == 2)
	{
		if ((*head)->next->i == 0)
			ra(head);
		else if ((*head)->next->i == 1)
		{
			sa(head);
			rra(head);
		}
	}
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
	part_index(s_a);
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
void	algo_more(t_list **s_a, t_list **s_b)
{
	int v1 = 0;
	int v2 = 0;
	int lv1 = -1;
	v1 = size_lst(s_a) / 3 + v1;
	v2 = size_lst(s_b) / 6 + v1;
	while(size_lst(s_a) > 3)
	{
		if ((*s_a)->i > lv1 && (*s_b)->i < v1 && (*s_b)->i )
			ra(s_a);
	}
}

void algo(t_list **s_a, t_list **s_b, int size)
{
	if (size == 2)
		sa(s_a);
	else if (size == 3)
		algo3(s_a);
	else if (size == 4)
		algo4(s_a, s_b);
	else if (size == 5)
		algo5(s_a, s_b);
}
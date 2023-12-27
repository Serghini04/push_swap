/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo4_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:47:50 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/27 16:34:04 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

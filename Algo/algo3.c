/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:44:53 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/28 17:21:20 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo3(t_list **h)
{
	t_list	*top;
	t_list	*last;

	top = *h;
	last = (*h)->next->next;
	if (top->data > top->next->data && top->data > last->data)
	{
		ra(h, 1);
		top = *h;
	}
	else if (top->next->data > top->data && top->next->data > last->data)
	{
		rra(h, 1);
		top = *h;
	}
	if (top->data > top->next->data)
		sa(h, 1);
}

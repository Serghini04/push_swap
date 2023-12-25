/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:09:27 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/25 17:28:53 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_list **head)
{
	t_list *i;
	t_list *j  = *head;

	if (!head)
		return ;
	i = last_lst(*head);
	while (j->next->next)
		j = j->next;
	j->next = NULL;
	i->next = *head;
	*head = i;
	write(1, "rra\n", 4);
}
void rrb(t_list **head)
{
	t_list *i;
	t_list *j  = *head;

	if (!head)
		return ;
	i = last_lst(*head);
	while (j->next->next)
		j = j->next;
	j->next = NULL;
	i->next = *head;
	*head = i;
	write(1, "rrb\n", 4);
}

void	rrr(t_list	**s_a, t_list **s_b)
{
	if (!s_a || !s_b)
		return ;
	rra(s_a);
	rra(s_b);
}
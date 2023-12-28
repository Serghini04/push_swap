/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:09:27 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/28 17:14:40 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **head, int bonus)
{
	t_list	*i;
	t_list	*j;

	if (!head ||!*head || size_lst(*head) < 1)
		return ;
	j = *head;
	i = last_lst(*head);
	while (j->next->next)
		j = j->next;
	j->next = NULL;
	i->next = *head;
	*head = i;
	if (bonus == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_list **head, int bonus)
{
	t_list	*i;
	t_list	*j;

	if (!head ||!*head || size_lst(*head) < 1)
		return ;
	j = *head;
	i = last_lst(*head);
	while (j->next->next)
		j = j->next;
	j->next = NULL;
	i->next = *head;
	*head = i;
	if (bonus == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_list	**s_a, t_list **s_b, int bonus)
{
	rra(s_a, bonus);
	rrb(s_b, bonus);
}

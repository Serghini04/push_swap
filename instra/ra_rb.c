/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:09:01 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/27 16:55:06 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **head)
{
	t_list	*tmp;

	if (!head)
		return ;
	tmp = (*head);
	(*head) = (*head)->next;
	tmp->next = 0;
	add_back(head, tmp);
	write(1, "ra\n", 3);
}

void	rb(t_list **head)
{
	t_list	*tmp;

	if (!head)
		return ;
	tmp = (*head);
	(*head) = (*head)->next;
	tmp->next = 0;
	add_back(head, tmp);
	write(1, "rb\n", 3);
}

void	rr(t_list **s_a, t_list **s_b)
{
	if (!s_a || !s_b)
		return ;
	ra(s_a);
	rb(s_b);
}

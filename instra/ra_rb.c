/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:09:01 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/28 17:56:30 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **head, int bonus)
{
	t_list	*tmp;

	if (!head || !*head || size_lst(*head) < 1)
		return ;
	tmp = (*head);
	(*head) = (*head)->next;
	tmp->next = 0;
	add_back(head, tmp);
	if (bonus == 1)
		write(1, "ra\n", 3);
}

void	rb(t_list **head, int bonus)
{
	t_list	*tmp;

	if (!head || !*head || size_lst(*head) < 1)
		return ;
	tmp = (*head);
	(*head) = (*head)->next;
	tmp->next = 0;
	add_back(head, tmp);
	if (bonus == 1)
		write(1, "rb\n", 3);
}

void	rr(t_list **s_a, t_list **s_b, int bonus)
{
	ra(s_a, bonus);
	rb(s_b, bonus);
}

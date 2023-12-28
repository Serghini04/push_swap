/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:07:50 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/28 17:45:42 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **head, int bonus)
{
	t_list	*curr;
	t_list	*next_node;

	if (!head || !*head || size_lst(*head) < 1)
		return ;
	curr = (*head);
	next_node = (*head)->next;
	curr->next = (*head)->next->next;
	*head = next_node;
	(*head)->next = curr;
	if (bonus == 1)
		write(1, "sa\n", 3);
}

void	sb(t_list **head, int bonus)
{
	t_list	*curr;
	t_list	*next_node;

	if (!head || !*head || size_lst(*head) < 1)
		return ;
	curr = (*head);
	next_node = (*head)->next;
	curr->next = (*head)->next->next;
	*head = next_node;
	(*head)->next = curr;
	if (bonus == 1)
		write(1, "sb\n", 3);
}

void	ss(t_list **s_a, t_list **s_b, int bonus)
{
	if (!s_a || !s_b)
		return ;
	sa(s_a, bonus);
	sb(s_b, bonus);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:07:50 by meserghi          #+#    #+#             */
/*   Updated: 2024/01/01 15:35:29 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **head, int bonus)
{
	t_list	*swap;

	if (!head || !*head || size_lst(*head) <= 1)
		return ;
	swap = *head;
	*head = (*head)->next;
	swap->next = (*head)->next;
	(*head)->next = swap;
	if (bonus == 1)
		write(1, "sa\n", 3);
}

void	sb(t_list **head, int bonus)
{
	t_list	*swap;

	if (!head || !*head || size_lst(*head) <= 1)
		return ;
	swap = *head;
	*head = (*head)->next;
	swap->next = (*head)->next;
	(*head)->next = swap;
	if (bonus == 1)
		write(1, "sb\n", 3);
}

void	ss(t_list **s_a, t_list **s_b, int bonus)
{
	sa(s_a, bonus);
	sb(s_b, bonus);
}

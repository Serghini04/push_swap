/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:21:46 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/28 13:35:57 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	pa(t_list **s_a, t_list **s_b)
{
	t_list	*new;

	if (!s_a || !s_b)
		return ;
	new = *s_b;
	*s_b = (*s_b)->next;
	new->next = NULL;
	add_front(s_a, new);
	write(1, "pa\n", 3);
}

void	pb(t_list **s_a, t_list **s_b)
{
	t_list	*new;

	if (!s_a || !s_b)
		return ;
	new = *s_a;
	*s_a = (*s_a)->next;
	new->next = NULL;
	add_front(s_b, new);
	write(1, "pb\n", 3);
}

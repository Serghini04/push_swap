/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:08:28 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/31 22:13:43 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*lst_map(t_list *lst)
{
	t_list	*new;

	new = NULL;
	while (lst)
	{
		add_back(&new, new_node(lst->data));
		lst = lst->next;
	}
	return (new);
}

void	del_max(t_list **clone, t_list *max)
{
	t_list	*i;

	i = *clone;
	if (i->data == max->data)
		*clone = i->next;
	while (i->next)
	{
		if (i->next->data == max->data)
		{
			i->next = i->next->next;
			break ;
		}
		i = i->next;
	}
	max->next = NULL;
	free(max);
}

void	find_max(t_list **lst, t_list **clone, int *x)
{
	t_list	*i;
	t_list	*j;
	t_list	*max;

	i = *clone;
	j = *lst;
	max = i;
	while (i)
	{
		if (max->data < i->data)
			max = i;
		i = i->next;
	}
	while (j)
	{
		if (max->data == j->data)
		{
			j->i = (*x)--;
			break ;
		}
		j = j->next;
	}
	del_max(clone, max);
}

void	part_index(t_list **lst)
{
	int		x;
	t_list	*clone;
	t_list	*i;

	x = size_lst(*lst) - 1;
	clone = lst_map(*lst);
	i = *lst;
	while (i)
	{
		find_max(lst, &clone, &x);
		i = i->next;
	}
}

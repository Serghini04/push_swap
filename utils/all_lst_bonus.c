/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_lst_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:45:39 by meserghi          #+#    #+#             */
/*   Updated: 2024/01/01 18:17:43 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_instra	*new_instra(char *data)
{
	t_instra	*new;

	new = malloc(sizeof(t_instra));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	add_back_instra(t_instra **h, t_instra *new)
{
	t_instra	*i;

	if (!h || !new)
		return ;
	i = *h;
	if (!*h)
	{
		*h = new;
		return ;
	}
	while (i->next)
		i = i->next;
	i->next = new;
	return ;
}

void	clr_instra(t_instra **h)
{
	t_instra	*swap;

	while (*h)
	{
		swap = (*h)->next;
		free((*h)->data);
		free(*h);
		(*h) = swap;
	}
	*h = NULL;
}

// void print_inst(t_instra *str)
// {
// 	while (str)
// 	{
// 		printf(">>%s<<", str->data);
// 		str = str->next;
// 	}
// }
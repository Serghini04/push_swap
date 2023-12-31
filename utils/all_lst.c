/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:22:21 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/29 21:15:00 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*new_node(int data)
{
	t_list	*res;

	res = malloc(sizeof(t_list));
	if (!res)
		return (NULL);
	res->data = data;
	res->next = NULL;
	return (res);
}

void	add_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (!lst || !new)
		return ;
	i = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (i->next)
		i = i->next;
	i->next = new;
}

int	size_lst(t_list *lst)
{
	int		count;
	t_list	*i;

	if (!lst)
		return (0);
	i = lst;
	count = 0;
	while (i)
	{
		i = i->next;
		count++;
	}
	return (count);
}

void	clr_all(t_list **lst)
{
	t_list	*i;
	t_list	*swap;

	if (!lst)
		return ;
	i = *lst;
	while (i)
	{
		swap = i;
		i = i->next;
		free(swap);
	}
	*lst = NULL;
}

t_list	*last_lst(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// void print_ind(t_list *h)
// {
// 	while (h)
// 	{
// 		printf("x = %d	==>	data = %d\n", h->i, h->data);
// 		h = h->next;
// 	}
// }

// void print_lst(t_list *lst)
// {
// 	t_list *i;

// 	i = lst;
// 	while (i)
// 	{
// 		printf("%d\n", i->data);
// 		i = i->next;
// 	}
// }
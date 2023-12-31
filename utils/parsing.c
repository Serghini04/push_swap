/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:06:58 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/31 11:35:41 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	if_sorted(t_list *head)
{
	t_list	*i;

	i = head;
	if (!head)
		return (0);
	while (i->next)
	{
		if (i->data > i->next->data)
			return (0);
		i = i->next;
	}
	return (1);
}

int	check_d(t_list *h)
{
	t_list	*i;
	t_list	*j;

	i = h;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->data == j->data)
				return (0);
			j = j->next;
		}
		i = i->next;
	}
	return (1);
}

int	check_res(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	clean_split(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

int	parsing(char *str, t_list **head)
{
	int		i;
	long	nb;
	char	**res;

	i = 0;
	res = ft_split(str, ' ');
	if (!res)
		return (0);
	while (res[i])
	{
		if (check_res(res[i]) == 0)
			return (clean_split(res), 0);
		if (res[i][0] == '-' || res[i][0] == '+')
		{
			if (res[i][1] == '\0')
				return (clean_split(res), clr_all(head), 0);
		}
		nb = ft_atoi(res[i]);
		add_back(head, new_node(nb));
		i++;
	}
	clean_split(res);
	return (1);
}

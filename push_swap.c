/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:10:24 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/26 21:59:25 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

int	check_res(char *str)
{
	int i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return(0);
		i++;
	}
	return (1);
}

long	ft_atoi(char *str)
{
	int	i;
	long	res;
	int	s;

	i = 0;
	res = 0;
	s = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (s * res);
}

void	clean_split(char **arr)
{
	int i = 0;
	if (!arr)
		return ;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

int parsing(char *str, t_list **head)
{
	int		i = 0;
	long	nb;
	char **res = ft_split(str, ' ');
	if (!res)
		return (0);
	while (res[i])
	{
		if (check_res(res[i]) == 0)
			return (clean_split(res), 0);
		if (res[i][0] == '-' || res[i][0] == '+')
		{
			if (res[i][1] == '\0')
				return (clean_split(res), 0);
		}
		nb = ft_atoi(res[i]);
		if (!(nb >= -2147483648 && nb <= 2147483647))
			return (clean_split(res), 0);
		add_back(head, new_node(nb));
		i++;
	}


	return (1);
}
int check_d(t_list *h)
{
	t_list *i = h;
	t_list *j;
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
int if_sorted(t_list *head)
{
	t_list *i = head;
	int c = 0;
	while (i->next)
	{
		if (i->data > i->next->data)
			c = 1;
		i = i->next;
	}
	if (c == 0)
		return (0);
	return (1);
}

int main(int ac, char **av)
{
	int i = 1;
	t_list *head = NULL;
	t_list *s_b = NULL;
	if (ac == 1)
		return (0);
	while (i < ac)
	{
		if (parsing(av[i], &head) == 0)
		{
			write(2, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	if (!head || check_d(head) == 0)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (if_sorted(head) == 0)
		return (-1);
	algo(&head, &s_b, size_lst(head));
	print_ind(head);
}

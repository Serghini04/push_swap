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
		if (i == 9 && str[0] != '-' && str[i] > '7')
			return (0);
		else if (i == 10 && str[0] == '-' && str[i] > '8')
			return (0);
		else if (i == 11)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
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

int parsing(char *str, t_list **head)
{
	int i = 0;
	char **res = ft_split(str, ' ');
	if (!res)
		return (0);
	while (res[i])
	{
		if (check_res(res[i]) == 0)
			return (0);
		if (res[i][0] == '-' || res[i][0] == '+')
		{
			if (res[i][1] == '\0')
				return (0);
		}
		add_back(head, new_node(ft_atoi(res[i])));
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
			{
				return (0);
			}
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
	int size = 0;
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
	print_lst(head);
	printf("------------Algo-----------\n");
	size = size_lst(head);
	if (size == 2)
		sa(&head);
	else if (size >= 3)
		rra(&head);
	print_lst(head);
}

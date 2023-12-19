#include "push_swap.h"

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

void print_lst(t_list *lst)
{
	t_list *i;

	i = lst;
	while (i)
	{
		printf("%d\n", i->data);
		i = i->next;
	}
}

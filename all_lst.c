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

void	add_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
		free(i);
	}
	*lst = NULL;
}
void print_ind(t_list *h)
{
	while (h)
	{
		printf("x = %d	==>	data = %d\n", h->i, h->data);
		h = h->next;
	}
}

t_list	*lst_map(t_list *lst)
{
	t_list *new;

	new = NULL;
	while(lst)
	{
		add_back(&new, new_node(lst->data));
		lst = lst->next;
	}
	return (new);
}

int ltaht(t_list *s_b, int pos)
{
	int s = size_lst(s_b) / 2;
	while (s)
	{
		if (s_b->i == pos)
			return (0);
		s_b = s_b->next;
		s--;
	}
	return (1);
}

t_list	*last_lst(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

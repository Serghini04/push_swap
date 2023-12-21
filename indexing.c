#include "push_swap.h"
void	del_max(t_list **clone, int min)
{
	t_list *i = *clone;
	if (i->data == min)
		*clone = i->next;
	while (i->next)
	{
		if (i->next->data == min)
		{
			i->next = i->next->next;
			break;
		}
		i = i->next;
	}
}

void find_max(t_list **lst, t_list **clone, int *x)
{
	t_list	*i = *clone;
	t_list	*j = *lst;
	int max = i->data;
	while (i)
	{
		if (max <= i->data)
			max = i->data;
		i = i->next;
	}
	while (j)
	{
		if (max == j->data)
		{
			j->i = (*x)--;
			break;
		}
		j = j->next;
	}
	del_max(clone, max);
}

void	part_index(t_list **lst)
{
	int x = size_lst(*lst) - 1;
	t_list *clone = lst_map(*lst);
	t_list *i = *lst;
	while (i)
	{
		find_max(lst, &clone, &x);
		i = i->next;
	}
}

#include "push_swap.h"

void pa(t_list **s_a, t_list **s_b)
{
	if (!s_a || !s_b)
		return ;
	t_list *new = *s_b;
	*s_b = (*s_b)->next;
	new->next = NULL;
	add_front(s_a, new);
	write(1, "pa\n", 3);
}

void pb(t_list **s_a, t_list **s_b)
{
	if (!s_a || !s_b)
		return ;
	t_list *new = *s_a;
	*s_a = (*s_a)->next;
	new->next = NULL;
	add_front(s_b, new);
	write(1, "pb\n", 3);
}

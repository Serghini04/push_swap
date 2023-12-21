#include "push_swap.h"

void rra(t_list **head)
{
	t_list *i;
	t_list *j  = *head;

	i = last_lst(*head);
	while (j->next->next)
		j = j->next;
	j->next = NULL;
	i->next = *head;
	*head = i;
	write(1, "rra\n", 4);
}
void rrb(t_list **head)
{
	t_list *i;
	t_list *j  = *head;

	i = last_lst(*head);
	while (j->next->next)
		j = j->next;
	j->next = NULL;
	i->next = *head;
	*head = i;
	write(1, "rrb\n", 4);
}

void rrr(t_list	**s_a, t_list **s_b)
{
	rra(s_a);
	rra(s_b);
}
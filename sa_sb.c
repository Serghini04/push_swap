#include "push_swap.h"

void sa(t_list **head)
{
	int	tmp;

	if (!head || !(*head)->next)
		return ;
	tmp = (*head)->data;
	(*head)->data = (*head)->next->data;
	(*head)->next->data = tmp;
	write(1, "sa\n", 3);
}

void sb(t_list **head)
{
	int	tmp;

	if (!head || !(*head)->next)
		return ;
	tmp = (*head)->data;
	(*head)->data = (*head)->next->data;
	(*head)->next->data = tmp;
	write(1, "sb\n", 3);
}

void ss(t_list **s_a, t_list **s_b)
{
	sa(s_a);
	sb(s_b);
}
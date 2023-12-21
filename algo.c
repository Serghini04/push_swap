#include "push_swap.h"

void	algo3(t_list **head)
{
	if ((*head)->i == 0)
	{
		sa(head);
		ra(head);
	}
	else if ((*head)->i == 1)
	{
		if ((*head)->next->i == 0)
			sa(head);
		else
			rra(head);
	}
	else if ((*head)->i == 2)
	{
		if ((*head)->next->i == 0)
			ra(head);
		else if ((*head)->next->i == 1)
		{
			sa(head);
			rra(head);
		}
	}
}
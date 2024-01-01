#include "push_swap.h"



void	ft_rra(t_list **s_a)
{
	t_list	*last = last_lst(*s_a);
	t_list *after_last = *s_a;
	t_list *swap = *s_a;
	while (after_last->next->next)
		after_last = after_last->next;
	after_last->next = NULL;
	*s_a = last;
	last->next = swap;
}

int main()
{
	t_list *s_a = NULL;
	add_back(&s_a, new_node(1));
	add_back(&s_a, new_node(2));
	add_back(&s_a, new_node(3));
	add_back(&s_a, new_node(4));
	add_back(&s_a, new_node(5));
	printf("--------s_a------\n");
	print_lst(s_a);
	printf("--------s_a-------\n");
	ft_rra(&s_a);
	print_lst(s_a);
}

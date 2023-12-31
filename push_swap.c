/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:10:24 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/31 11:33:24 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_list	*head;
	t_list	*s_b;

	i = 1;
	head = NULL;
	s_b = NULL;
	if (ac == 1)
		return (0);
	while (i < ac)
	{
		if (parsing(av[i], &head) == 0)
			(write(2, "Error\n", 6), clr_all(&head), exit(-1));
		i++;
	}
	if (!head || check_d(head) == 0)
		(write(2, "Error\n", 6), clr_all(&head), exit(-1));
	if (if_sorted(head) == 1)
		(clr_all(&head), exit(-1));
	algo(&head, &s_b, size_lst(head));
	clr_all(&head);
	return (0);
}

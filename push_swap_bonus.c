/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:14:57 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/27 20:12:09 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int main(int ac, char **av)
{
	t_list	*s_a;
	int		i;

	i = 0;
	s_a = NULL;
	if (ac == 1)
		return (0);
	while (i < ac)
	{
		if (parsing(av[i], &s_a == 0)
			(write(2, "Error\n", 6), exit(-1));
		i++;
	}
}
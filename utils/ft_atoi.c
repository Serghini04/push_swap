/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:11:23 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/31 11:58:17 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <limits.h>

long	ft_atoi(char *str, t_list **head, char **fl)
{
	int		i;
	long	res;
	int		s;

	i = 0;
	res = 0;
	s = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		if ((res > 2147483648 && s == -1) || (res > 2147483647 && s == 1))
			(write(2, "Error\n", 6), clr_all(head), clean_split(fl), exit(1));
		i++;
	}
	return (s * res);
}

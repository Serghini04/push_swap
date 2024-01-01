/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:52:50 by meserghi          #+#    #+#             */
/*   Updated: 2024/01/01 18:00:14 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strdup(char *s1)
{
	char	*res;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = ((char *)s1)[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

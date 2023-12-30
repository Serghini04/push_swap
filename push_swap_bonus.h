/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:47:15 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/29 21:14:30 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

typedef struct s_instra
{
	char			*data;
	struct s_instra	*next;
}	t_instra;

int			check_instra(char *str, t_list **s_a, t_list **s_b);
int			ft_strcmp(char *s1, char *s2);
void		add_back_instra(t_instra **h, t_instra *new);
t_instra	*new_instra(char *data);
int			usage_instra(t_instra **h, t_list **s_a, t_list **s_b);
void		clr_instra(t_instra **h);
//you need to delete
void print_inst(t_instra *str);
# endif
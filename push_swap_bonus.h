/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:15:33 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/28 12:56:30 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_BONUS_H
#define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "get_next_line/get_next_line.h"
# include "push_swap.h"

//Utils
int	check_instra(char *str, t_list **s_a, t_list **s_b);
int	ft_strcmp(char *s1, char *s2);

#endif
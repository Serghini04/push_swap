/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:09:52 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/25 17:57:57 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	int				i;
	int				data;
	struct s_list	*next;
}	t_list;


char	**ft_split(char const *s, char c);
void	add_back(t_list **lst, t_list *new);
t_list	*new_node(int data);
void	print_lst(t_list *lst);
int		size_lst(t_list *lst);
int		check_res(char *str);
int 	check_d(t_list *h);
int 	parsing(char *str, t_list **head);
void	sa(t_list **head);
void 	sb(t_list **head);
void 	ss(t_list **s_a, t_list **s_b);
void	ra(t_list **head);
void	rb(t_list **head);
void	rr(t_list **s_a, t_list **s_b);
void 	rra(t_list **head);
t_list	*last_lst(t_list *lst);
void	add_front(t_list **lst, t_list *new);
void 	pb(t_list **s_a, t_list **s_b);
t_list	*lst_map(t_list *lst);
void	clr_one(t_list *lst);
void	clr_all(t_list **lst);
void 	print_ind(t_list *h);
void	part_index(t_list **lst);
void find_max(t_list **lst, t_list **clone, int *x);
void	del_max(t_list **clone, int min);
void	algo3(t_list **head);
void	algo4(t_list **s_a, t_list **s_b);
void	algo5(t_list **s_a, t_list **s_b);
void algo(t_list **s_a, t_list **s_b, int size);
void 	pa(t_list **s_a, t_list **s_b);
void	algo_more(t_list **s_a, t_list **s_b);
void	finito(t_list **s_a, t_list **s_b);
#endif
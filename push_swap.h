/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:09:52 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/27 20:20:04 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				i;
	int				data;
	struct s_list	*next;
}	t_list;

//Algo
void	algo4(t_list **s_a, t_list **s_b);
void	algo5(t_list **s_a, t_list **s_b);
void	algo3(t_list **h);
void	finito(t_list **s_a, t_list **s_b);
void	algo(t_list **s_a, t_list **s_b, int size);
void	algo_more(t_list **s_a, t_list **s_b);
int		ltaht(t_list *s_b, int pos);
//Instra
void	sa(t_list **head);
void	sb(t_list **head);
void	ss(t_list **s_a, t_list **s_b);
void	ra(t_list **head);
void	rb(t_list **head);
void	rrb(t_list **head);
void	rr(t_list **s_a, t_list **s_b);
void	pb(t_list **s_a, t_list **s_b);
void	pa(t_list **s_a, t_list **s_b);
void	rra(t_list **head);

//utils

long	ft_atoi(char *str);
char	**ft_split(char const *s, char c);
void	add_back(t_list **lst, t_list *new);
t_list	*new_node(int data);
int		size_lst(t_list *lst);
int		if_sorted(t_list *head);
int		check_res(char *str);
int		check_d(t_list *h);
int		parsing(char *str, t_list **head);
t_list	*last_lst(t_list *lst);
void	add_front(t_list **lst, t_list *new);
t_list	*lst_map(t_list *lst);
void	clr_one(t_list *lst);
void	clr_all(t_list **lst);
void	part_index(t_list **lst);
void	find_max(t_list **lst, t_list **clone, int *x);
void	del_max(t_list **clone, t_list *max);

///you need to deleted..
void	print_lst(t_list *lst);
void	print_ind(t_list *h);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:09:52 by meserghi          #+#    #+#             */
/*   Updated: 2023/12/31 11:58:43 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "get_next_line/get_next_line.h"

typedef struct s_list
{
	int				i;
	int				data;
	struct s_list	*next;
}	t_list;

typedef struct s_instra
{
	char			*data;
	struct s_instra	*next;
}	t_instra;

//Algo
void		algo4(t_list **s_a, t_list **s_b);
void		algo5(t_list **s_a, t_list **s_b);
void		algo3(t_list **h);
void		finito(t_list **s_a, t_list **s_b);
void		algo(t_list **s_a, t_list **s_b, int size);
void		algo_more(t_list **s_a, t_list **s_b);
int			ltaht(t_list *s_b, int pos);

//Instra
void		sa(t_list **head, int bonus);
void		sb(t_list **head, int bonus);
void		ss(t_list **s_a, t_list **s_b, int bonus);
void		ra(t_list **head, int bonus);
void		rb(t_list **head, int bonus);
void		rrb(t_list **head, int bonus);
void		rr(t_list **s_a, t_list **s_b, int bonus);
void		pb(t_list **s_a, t_list **s_b, int bonus);
void		pa(t_list **s_a, t_list **s_b, int bonus);
void		rra(t_list **head, int bonus);
void		rrr(t_list	**s_a, t_list **s_b, int bonus);

//utils
long		ft_atoi(char *str, t_list **head, char **fl);
char		**ft_split(char const *s, char c);
void		add_back(t_list **lst, t_list *new);
t_list		*new_node(int data);
int			size_lst(t_list *lst);
int			if_sorted(t_list *head);
int			check_res(char *str);
int			check_d(t_list *h);
int			parsing(char *str, t_list **head);
t_list		*last_lst(t_list *lst);
void		add_front(t_list **lst, t_list *new);
t_list		*lst_map(t_list *lst);
void		clr_one(t_list *lst);
void		clr_all(t_list **lst);
void		part_index(t_list **lst);
void		find_max(t_list **lst, t_list **clone, int *x);
void		del_max(t_list **clone, t_list *max);
void		clean_split(char **arr);
//Bonus
int			check_instra(char *str, t_list **s_a, t_list **s_b);
int			ft_strcmp(char *s1, char *s2);
void		add_back_instra(t_instra **h, t_instra *new);
int			usage_instra(t_instra **h, t_list **s_a, t_list **s_b);
void		clr_instra(t_instra **h);
t_instra	*new_instra(char *data);

// ///you need to deleted..
// void		print_lst(t_list *lst);
// void		print_ind(t_list *h);
// void		print_inst(t_instra *str);

#endif
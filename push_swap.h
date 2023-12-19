
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
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
#endif
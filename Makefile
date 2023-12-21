# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 12:10:40 by meserghi          #+#    #+#              #
#    Updated: 2023/12/21 17:47:36 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = pa_pb.c ra_rb.c rra_rrb.c sa_sb.c all_lst.c ft_split.c push_swap.c indexing.c algo.c
EXE = push_swap
FLAGS = -Wall -Wextra -Werror

all :
	cc $(FLAGS) $(SRC) -o $(EXE)
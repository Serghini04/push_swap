SRC = instra/pa_pb.c instra/ra_rb.c instra/rra_rrb.c instra/sa_sb.c\
	Algo/algo.c Algo/algo3.c Algo/algo4_5.c push_swap.c\
	utils/all_lst.c utils/ft_split.c utils/ft_atoi.c utils/indexing.c\
	utils/parsing.c

SRC_BONUS = get_next_line/get_next_line.c get_next_line/get_next_line_utils.c\
		push_swap_bonus.c utils/ft_strcmp.c utils/all_lst.c utils/ft_split.c \
		instra/pa_pb.c instra/ra_rb.c instra/rra_rrb.c instra/sa_sb.c\
		utils/ft_atoi.c utils/indexing.c utils/parsing.c

EXE_BONUS = checker

EXE = push_swap

FLAGS = -Wall -Wextra -Werror

all :
	cc $(FLAGS) $(SRC) -o $(EXE)

bonus :
	cc $(FLAGS) $(SRC_BONUS) -o $(EXE_BONUS)
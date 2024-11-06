SRC = instru/pa_pb.c instru/ra_rb.c instru/rra_rrb.c instru/sa_sb.c\
	Algo/algo.c Algo/algo3.c Algo/algo4_5.c push_swap.c\
	utils/all_lst.c utils/ft_split.c utils/ft_atoi.c utils/indexing.c\
	utils/parsing.c

SRC_BONUS = get_next_line/get_next_line.c get_next_line/get_next_line_utils.c\
		push_swap_bonus.c utils/ft_strcmp_bonus.c utils/all_lst.c utils/ft_split.c \
		instru/pa_pb.c instru/ra_rb.c instru/rra_rrb.c instru/sa_sb.c utils/ft_strdup.c\
		utils/ft_atoi.c utils/indexing.c utils/parsing.c utils/all_lst_bonus.c

OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

EXE_BONUS = checker

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

all : ${NAME}

bonus :${EXE_BONUS}

${NAME} : ${OBJ}
	cc ${FLAGS} ${OBJ} -o ${NAME}

${EXE_BONUS} : ${OBJ_BONUS}
	cc ${FLAGS} ${OBJ_BONUS} -o ${EXE_BONUS}

%.o : %.c push_swap.h
	cc ${FLAGS} -c $< -o $@

clean :
	rm -f ${OBJ} ${OBJ_BONUS}

fclean : clean
	rm -f ${NAME} ${EXE_BONUS}

re : fclean all

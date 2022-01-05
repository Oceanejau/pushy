NAME = push_swap

PATH_SRCS = ./
PATH_HEADERS = ./

COMPILER_COMMAND = gcc
FLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c\
			check_arg.c\
			do_pa.c\
			do_pb.c\
			do_ra.c\
			do_rb.c\
			do_rr.c\
			do_rra.c\
			do_rrb.c\
			do_rrr.c\
			do_sa.c\
			do_sb.c\
			do_ss.c\
			doubles.c\
			err.c\
			fill_tab.c\
			ordr_a.c\
			ordr_b.c\
			ordr_ab.c\
			trois.c\
			cinq.c\
			where.c\
			pre_pos.c\
			pos.c\
			more.c\
			noyau.c\
			ft_atoi.c\
			fat_lit.c\
			str_size_ll.c\
			main.c\

OBJS = ${SRCS:.c=.o}

INCLUDES = push_swap.h

all: ${NAME}

.c.o:
	${COMPILER_COMMAND} ${FLAGS} -c $< -o $@

$(NAME): ${OBJS}
	${COMPILER_COMMAND} ${FLAGS} ${OBJS} -o ${NAME} 
clean:
	rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

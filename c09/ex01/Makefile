SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
SRCSO	= srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o
OBJS	= ${SRCS: .c = .o}
HEAD	= includes/ft.h
RM		= rm -rf
CC		= gcc
LIB		= ar rc
CFLAGS	= -c -Wall -Wextra -Werror
NAME	= libft.a

all:	${NAME}

${NAME}:${OBJS} ${LIB} ${NAME} ${SRCSO} ${HEAD}

clean:	${RM} ${SRCSO}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re	

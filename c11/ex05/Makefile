CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f
RUN		= ./${NAME}
SHELL	= /bin/bash

NAME	= do-op

SRCDIR	= srcs
INCDIR	= includes

SRCS	= ${SRCDIR}/ft_putchar.c \
	  		${SRCDIR}/ft_putstr.c \
	  		${SRCDIR}/ft_atoi.c \
	  		${SRCDIR}/ft_find_index.c \
	  		${SRCDIR}/ft_putnbr.c \
	  		operations.c \
	  		main.c
OBJS	= ${SRCS:.c=.o}

all:		${NAME}

%.o:%.c
			${CC} ${CFLAGS} -c $< -o $@ -I ${INCDIR}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o $@ ${OBJS}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

test_err:	${NAME}
			@echo "---"
			@echo "Expect invalid operator to print 0.."
			@echo "---"
			@${RUN} 42 p 21
			@echo "---"
			@echo "Expect division by 0 to print error.."
			@echo "---"
			@${RUN} 42 "/" 0
			@echo "---"
			@echo "Expect modulo by 0 to print error.."
			@echo "---"
			@${RUN} 42 "%" 0
			@echo
		
test:		${NAME}
			@echo "---"
			@echo "Expect 42 + 21 to be 63.."
			@echo "---"
			@diff <(${RUN} 42 "+" 21) <(echo 63) 
			@echo "---"
			@echo "Expect 42 * 21 to be 882.."
			@echo "---"
			@diff <(${RUN} 42 "*" 21) <(echo 882) 
			@echo "---"
			@echo "Expect 42 - 21 to be 21.."
			@echo "---"
			@diff <(${RUN} 42 "-" 21) <(echo 21) 
			@echo "---"
			@echo "Expect 42 / 21 to be 2.."
			@echo "---"
			@diff <(${RUN} 42 "/" 21) <(echo 2) 
			@echo "---"
			@echo "Expect 42 % 21 to be 0.."
			@echo "---"
			@diff <(${RUN} 42 "%" 21) <(echo 0)
			@echo
		
tests:		test test_err

.PHONY : 	re fclean clean all tests

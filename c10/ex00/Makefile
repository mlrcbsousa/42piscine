CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f
RUN		= ./${NAME}

NAME	= ft_display_file

SRCDIR	= srcs
INCDIR	= includes

SRCS	= ${SRCDIR}/ft_putchar.c ${SRCDIR}/ft_putstr.c ${SRCDIR}/ft_display_file.c main.c
OBJS	= ${SRCS:.c=.o}

FILE	= tests/file.txt

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

file:		
			@echo "Hello World!" > ${FILE}

test:		${NAME} file
			@echo "Should display ${FILE} contents.."
			@${RUN} ${FILE}
			@echo "---"
			@echo "Diff should be empty.."
			@cat main.c > a
			@${RUN} main.c > b
			@diff a b > tests/test.txt
			@rm a b
			@cat tests/test.txt
			@echo "---"
			@echo "Should display file missing error.."
			@${RUN}
			@echo "---"
			@echo "Should display too many files error.."
			@${RUN} ${FILE} main.c
			@echo "---"
			@echo "Should display can not read error.."
			@${RUN} nofile.txt
			@echo "---"

.PHONY : 	re fclean clean all file test

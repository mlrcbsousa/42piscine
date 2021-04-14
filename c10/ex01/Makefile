CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f
RUN		= ./${NAME}

NAME	= ft_cat

SRCDIR	= srcs
INCDIR	= includes

SRCS	= ${SRCDIR}/ft_putchar.c \
	  		${SRCDIR}/ft_putstr.c \
	  		${SRCDIR}/ft_puterr.c \
	  		${SRCDIR}/ft_display_file.c \
	  		${SRCDIR}/ft_stdin.c \
	  		main.c
OBJS	= ${SRCS:.c=.o}

FILE1	= tests/file1.txt
FILE2	= tests/file2.txt
FILES	= ${FILE1} ${FILE2}

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

files:		
			@echo "Hello World from file1!" > ${FILE1}
			@echo "Hello World from file2!" > ${FILE2}

test_err:	${NAME} files
			@echo "Should handle errors for each file.."
			@echo "---"
			-@${RUN} nofile1.txt ${FILES} nofile2.txt
			@echo "-"
			-@cat nofile1.txt ${FILES} nofile2.txt
			@echo "\n"
		
test_diff:	${NAME} files
			@echo "Diff should be empty.."
			@echo "---"
			@cat ${FILES} > a
			@${RUN} ${FILES} > b
			-@diff a b > tests/test.txt
			@rm a b
			@cat tests/test.txt
			@echo "\n"

test:		${NAME} files
			@echo "Should display ${FILE1} and ${FILE2} contents.."
			@echo "---"
			@${RUN} ${FILES}
			@echo "\n"
		
tests:		test test_diff test_err

.PHONY : 	re fclean clean all file test

CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f
RUN		= ./${NAME}
RFLAGS	= -c 5
RUNWF	= ${RUN} ${RFLAGS}

NAME	= ft_tail

SRCDIR	= srcs
INCDIR	= includes
TESTDIR	= tests

SRCS	= ${SRCDIR}/ft_putchar.c \
	  		${SRCDIR}/ft_putstr.c \
	  		${SRCDIR}/ft_puterr.c \
	  		${SRCDIR}/ft_display_file.c \
	  		${SRCDIR}/ft_stdin.c \
	  		${SRCDIR}/ft_atoi.c \
	  		valid.c \
	  		main.c
OBJS	= ${SRCS:.c=.o}

FILE1	= ${TESTDIR}/file1.txt
FILE2	= ${TESTDIR}/file2.txt
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
			-@${RUNWF} nofile1.txt ${FILES} nofile2.txt
			@echo "-"
			-@tail ${RFLAGS} nofile1.txt ${FILES} nofile2.txt
			@echo "\n"
			@echo "Should handle invalid number of bytes.."
			@echo "---"
			-@${RUN} -c d
			@echo "-"
			-@tail -c d
			@echo "---"
			-@${RUN} -c d nofile1.txt
			@echo "-"
			-@tail -c d nofile1.txt
			@echo "\n"

test_diff:	${NAME} files
			@echo "Diffs should be empty.."
			@echo "---"
			@echo "Multiple files"
			@echo "-"
			@tail ${RFLAGS} ${FILES} > a
			@${RUNWF} ${FILES} > b
			-@diff a b > ${TESTDIR}/test_multiple.txt
			@rm a b
			@cat ${TESTDIR}/test_multiple.txt
			@echo "---"
			@echo "Single file"
			@echo "-"
			@tail ${RFLAGS} ${FILE1} > a
			@${RUNWF} ${FILE1} > b
			-@diff a b > ${TESTDIR}/test_single.txt
			@rm a b
			@cat ${TESTDIR}/test_single.txt
			@echo "\n"

test:		${NAME} files
			@echo "Should display tail of ${FILE1}.."
			@echo "---"
			@${RUNWF} ${FILE1}
			@echo "\n"
			@echo "Should display tail of ${FILE1} and ${FILE2}.."
			@echo "---"
			@${RUNWF} ${FILES}
			@echo "\n"
		
tests:		test test_diff test_err

.PHONY : 	re fclean clean all file test

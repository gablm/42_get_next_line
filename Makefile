NAME=test
COMPILER=cc
FLAGS= -Wall -Werror -Wextra
FILES= get_next_line.c get_next_line_utils.c $(NAME).c

all:
	$(COMPILER) $(FLAGS) $(FILES) -o $(NAME) -ggdb3 -D BUFFER_SIZE=10000000
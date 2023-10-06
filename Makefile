NAME=test
COMPILER=cc
FLAGS= -Wall -Werror -Wextra
FILES= get_next_line.c get_next_line_utils.c 
FILES_B= get_next_line_bonus.c get_next_line_utils_bonus.c

m:
	$(COMPILER) $(FLAGS) $(FILES) $(NAME).c -o $(NAME) -D BUFFER_SIZE=1

b:
	$(COMPILER) $(FLAGS) $(FILES_B) $(NAME).c -o $(NAME) -D BUFFER_SIZE=100000000

NAME=test
COMPILER=cc
FLAGS= -Wall -Werror -Wextra
FILES= get_next_line.c get_next_line_utils.c test.c
FILES_B= get_next_line_bonus.c get_next_line_utils_bonus.c test_bonus.c

m: $(FILES)
	$(COMPILER) $(FLAGS) $(FILES) -o $(NAME) -D BUFFER_SIZE=1

b: $(FILES_B)
	$(COMPILER) $(FLAGS) $(FILES_B) -o $(NAME) -D BUFFER_SIZE=100

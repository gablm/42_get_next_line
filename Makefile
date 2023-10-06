NAME=test
COMPILER=cc
FLAGS= -Wall -Werror -Wextra
FILES= get_next_line.c get_next_line_utils.c $(NAME).c
FILES_B= $(FILES:.c=_bonus.c)

m:
	$(COMPILER) $(FLAGS) $(FILES) -o $(NAME) -D BUFFER_SIZE=42

b:
	$(COMPILER) $(FLAGS) $(FILES_B) -o $(NAME) -D BUFFER_SIZE=42

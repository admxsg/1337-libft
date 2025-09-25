NAME = libft.a 
CC = gcc 
FLAGS = -Wall -Wextra -Werror 
SRC = $(wildcard  ft*.c) 
OBJ = $(SRC:.c=.o) 

all : $(NAME) 

$(NAME) : $(OBJ)  
	ar rcs $(NAME) $(OBJ)
%.o : %.c libft.h 
	$(CC) $(FLAGS) -c $< -o $@

clean :         
	rm -f $(OBJ) 
fclean : clean  
	rm -f $(NAME) 
re : fclean all 

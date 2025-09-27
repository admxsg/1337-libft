NAME = libft.a 
CC = gcc 
FLAGS = -Wall -Wextra -Werror 
SRC = ft_strlcpy.c ft_memcpy.c ft_isprint.c ft_isalpha.c ft_atoi.c \
		ft_memmove.c ft_memchr.c ft_isascii.c ft_strnstr.c ft_calloc.c \
		ft_strrchr.c ft_strncmp.c ft_memset.c ft_memcmp.c ft_strdup.c\
		ft_bezero.c ft_touper.c ft_tolower.c ft_strlcat.c ft_substr.c \
		ft_strchr.c ft_isdigit.c ft_isalnum.c ft_strlen.c
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

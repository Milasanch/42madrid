NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = 

OBJ = $(SRC:.c=.o)

AR = ar -rcs

RM = rm -f

INCLUDE = -I .

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
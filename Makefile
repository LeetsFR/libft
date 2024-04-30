NAME = libft.a
CC = cc -Wall -Wextra -Werror

SRC-FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c
SRC-DIR = src
SRC = $(addprefix $(SRC-DIR)/, $(SRC-FILES))

OBJ-DIR = obj
OBJ = $(SRC:$(SRC-DIR)/%.c=$(OBJ-DIR)/%.o)

all: $(OBJ-DIR) $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ-DIR)/%.o: $(SRC-DIR)/%.c | $(OBJ-DIR)
	$(CC) -I include -c $< -o $@

$(OBJ-DIR):
	mkdir -p $(OBJ-DIR)

clean:
	rm -rf $(OBJ-DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all


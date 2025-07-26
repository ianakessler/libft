NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
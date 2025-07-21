NAME = libft.a
INCLUDES = include
OBJ_DIR = /obj
SRC_DIR = /src
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I
RM = rm -f
AR = ar rcs


FT_IS_DIR = ft_is
FT_IS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FT_MEM_DIR = ft_mem
FT_MEM = ft_bzero ft_memcpy ft_memset

FT_STR_DIR = ft_str
FT_STR = ft_strchr ft_strlcpy ft_strncmp ft_strrchar ft_strlcat ft_strlen ft_strnstr

FT_TO_DIR = ft_to
FT_TO = ft_atoi ft_tolower ft_toupper

SRC_FILES += $(addprefix $(FT_IS_DIR), $(FT_IS))
SRC_FILES += $(addprefix $(FT_MEM_DIR), $(FT_MEM))
SRC_FILES += $(addprefix $(FT_STR_DIR), $(FT_STR))
SRC_FILES += $(addprefix $(FT_TO_DIR), $(FT_TO))

SRCS = $(addprefix $(SRC_DIR), $(addsufix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsufix .o, $(SRC_FILES)))

OBJSF = .cache_exists

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJSF)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_IS_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_MEM_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_STR_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_TO_DIR)

clean:
	@$(RM) -r $(OBJ_DIR)
	@$(RM) $(OBJSF)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: re all fclean clean
NAME = libft.a

SRC = ft_isalnum.c  ft_isprint.c  ft_memmove.c  ft_strjoin.c  ft_strncmp.c  ft_substr.c \
		ft_atoi.c    ft_isalpha.c  ft_memchr.c   ft_memset.c   ft_strlcat.c  ft_strnstr.c  ft_tolower.c \
		ft_bzero.c   ft_isascii.c  ft_memcmp.c   ft_strchr.c   ft_strlcpy.c  ft_strrchr.c  ft_toupper.c \
		ft_calloc.c  ft_isdigit.c  ft_memcpy.c   ft_strdup.c   ft_strlen.c	ft_strtrim.c	ft_split.c \
		ft_itoa.c	ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c \
		ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

CC = cc

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@printf "\033[1;39;47m"
	ar rcs $(NAME) $(OBJ)

%.o: %.c Makefile 
	@printf "\033[1;35;47m compile 🦄\033[1;34;47m $@ \033[0m \n"
	@$(CC) $(FLAG) -I. -c $< -o $@
	@printf "\033[0m"

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
# 	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: clean fclean re all 
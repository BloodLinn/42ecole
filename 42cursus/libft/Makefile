NAME = libft.a
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c \
ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memcpy.c ft_memmove.c\
ft_memchr.c ft_strlcat.c ft_strlcpy.c ft_memcmp.c ft_calloc.c

OBJS = $(SRCS:.c=.o);

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf DENEME

re:	fclean all

x: $(NAME)
	cc main.c $(NAME) -o DENEME
	./DENEME
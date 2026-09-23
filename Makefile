.PHONY: all clean fclean re test

SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_memchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c
OBJS = $(SRCS:.c=.o)

all: libft.a

test: libft.a
	@gcc -Wall -Werror -Wextra test.c -L. -lft -o test.out -lbsd
	./test.out


libft.a: $(OBJS)
	ar rcs libft.a $?

$(OBJS) : %.o : %.c
	gcc -Wall -Werror -Wextra -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a *.out

re: fclean all
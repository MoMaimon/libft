*This project has been created as part of the 42 curriculum by mabd-elh.*

## Description
This project is a replacment of standard library with additional functions, it will be used for feature 42 projects.

## Instructions
- Clone the repositry into your device
``` bash
git clone https://github.com/MoMaimon/libft.git libft
```
- Compile and add the function into the library
```bash
make
```
- To use the library copy `libft.a` and `libft.h` into your project
- Compile your project using the library
```bash
gcc -Wall -Wextra -Werror -c main.c -o main.o
gcc main.o -L. -lft -o my_program
```

## Resources



## Library Description
| Function | Prototype | Description |
| :--- | :--- | :--- |

|**ft_atoi** | `int ft_atoi(const char *nptr);` | Converts the initial portion of the string pointed to by `nptr` to int. |
- ft_bzero
- ft_calloc
- ft_isalnum
- ft_isalpha
- ft_isascii
- ft_isdigit
- ft_isprint
- ft_itoa
- ft_lstadd_back
- ft_lstadd_front
- ft_lstclear
- ft_lstdelone
- ft_lstiter
- ft_lstlast
- ft_lstmap
- ft_lstnew
- ft_lstsize
- ft_memchr
- ft_memcmp
- ft_memcpy
- ft_memmove
- ft_memset
- ft_putchar_fd
- ft_putendl_fd
- ft_putnbr_fd
- ft_putstr_fd
- ft_split
- ft_strchr
- ft_strdup
- ft_striteri
- ft_strjoin
- ft_strlcat
- ft_strlcpy
- ft_strlen
- ft_strmapi
- ft_strncmp
- ft_strnstr
- ft_strrchr
- ft_strtrim
- ft_substr
- ft_tolower
- ft_toupper
# This is a Makefile which can 
# compile (make all)
# recompile (make re)
# delete object files (make clean)
# delete object files and execuatable (make fclean)
# compile bonus files (make bonus)

CC=gcc
CFLAGS= -Wall -Werror -Wextra

CFILES= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcpy.c ft_memcmp.c \
		ft_memmove.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_str_to_lower.c ft_is_float.c ft_atof.c ft_strjoin_free_1.c \
		ft_strndup.c

BONUS= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c	

OBJECTS=$(CFILES:.c=.o)

BONUS_OBJ	= $(BONUS:.c=.o)

NAME=libft.a

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS) $?

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJECTS) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS) $(BONUS_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
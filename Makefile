NAME = libftprintf.a

SRCS = ft_printf.c \
		print_functions.c \
		print.c \
		to_hex.c \
		check_functions.c \
		ft_utoa.c \
		libft/ft_strlen.c \
		libft/ft_strdup.c \
		libft/ft_itoa.c \
		libft/ft_substr.c \
		libft/ft_strjoin.c \
		libft/ft_memcpy.c \

OBJS = $(SRCS:.c=.o)

RM 	 = rm -f

.c.o:
		gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

all: $(OBJS)
	 ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libft.a
RM		=	rm -rf
SRCS	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlen.c
OBJS	=	$(SRCS:.c=.o)
INC		=	includes
HEADER	=	libft.h

all: $(NAME) clean

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

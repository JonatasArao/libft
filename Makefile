CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I$(INC)
NAME	=	libft.a
RM		=	rm -rf
SRCS	=	srcs/ft_isalpha.c \
			srcs/ft_isdigit.c \
			srcs/ft_isalnum.c
OBJS	=	$(SRCS:.c=.o)
INC		=	includes
HEADER	=	$(INC)/libft.h

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

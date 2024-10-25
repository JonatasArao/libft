CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
NAME		=	libft.a
RM			=	rm -rf
SRCS		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_memset.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_memcpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memmove.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_striteri.c \
				ft_strmapi.c \
				ft_itoa.c \
				ft_split.c
OBJS		=	$(SRCS:.c=.o)
BONUS_SRCS	=	ft_lstnew.c
BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)
HEADER		=	libft.h

all: $(NAME)

bonus : $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

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

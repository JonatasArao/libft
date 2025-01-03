CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
NAME		=	libft.a
RM			=	rm -rf
MANDATORY	=	ft_isalpha.c \
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
BONUS		=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c
CUSTOM		=	get_next_line.c \
				ft_strtol.c \
				ft_isxdigit.c \
				ft_free_matrix.c \
				ft_delpointer.c \
				ft_count_if.c \
				ft_strall.c \
				ft_strforeach.c \
				ft_strtok.c \
				ft_strtok_r.c
OBJS_DIR	=	objs
OBJS		=	$(addprefix $(OBJS_DIR)/, \
				$(MANDATORY:.c=.o) \
				$(BONUS:.c=.o) \
				$(CUSTOM:.c=.o))
HEADER = libft.h
INCLUDES = -I.

all: $(NAME)

debug: CFLAGS += -g
debug: all

clean:
	$(RM) $(OBJS) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

$(NAME) : $(OBJS)
	ar rcs $@ $?

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: mandatory/%.c $(HEADER) | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_DIR)/%.o: bonus/%.c $(HEADER) | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_DIR)/%.o: custom/%.c $(HEADER) | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

.PHONY: all clean fclean re

NAME = libft.a
SRC_FILES = ft_isalpha.c
OBJS = $(SRC_FILES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $@ $^
%.o: %.c libft.h Makefile
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re

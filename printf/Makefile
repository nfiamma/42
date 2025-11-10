# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/04 16:18:01 by nfiamma           #+#    #+#              #
#    Updated: 2025/11/04 16:19:23 by nfiamma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCL = -Iincludes
SRCS = srcs/ft_printf.c srcs/handlers.c srcs/utils_num.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
ar rcs $(NAME) $(OBJS)

%.o: %.c
$(CC) $(CFLAGS) $(INCL) -c $< -o $@

clean:
rm -f $(OBJS)

fclean: clean
rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#              #
#    Updated: 2025/10/17 16:02:06 by marcos-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_display_file

SRCS = ft_display_file.c

OBJS = $(SRCS:.c=.o)

CC = gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC)  $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

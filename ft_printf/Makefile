# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#              #
#    Updated: 2025/11/05 20:07:26 by marcos-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= ft_printf
CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
RM			:= rm -f

SRCS_DIR	:= .
OBJS_DIR	:= objs
LIBFT_DIR	:= ./libft
LIBFT		:= $(LIBFT_DIR)/libft.a

SRCS		:= ft_printf.c ft_for.c c_hex.c

OBJS		:= $(SRCS:%.c=$(OBJS_DIR)/%.o)

INCS		:= -I. -I$(LIBFT_DIR)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(RM) -r $(OBJS_DIR)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
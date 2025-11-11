# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#              #
#    Updated: 2025/11/04 19:59:55 by marcos-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
		ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c\
		ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c\
		ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
		ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c\
		ft_putnbr_fd.c ft_striteri.c
		
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		ft_lstmap.c

CFLAGS = -Wall  -Werror -Wextra

OBJ = $(SRCS:.c=.o) 
BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus : $(OBJ) $(BONUS_OBJ)
	ar -rcs $(NAME) $(OBJ) $(BONUS_OBJ)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

test: $(NAME)
	cc $(CFLAGS)  -L . -libft.h -o 

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME) $(BONUS_OBJ)

re: fclean all

.PHONY: all clean fclean re

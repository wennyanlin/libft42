# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wlin <wlin@student.42barcelona.>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 20:06:48 by wlin              #+#    #+#              #
#    Updated: 2023/09/09 20:06:54 by wlin             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = libft.h

SRCS =  ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
        ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strlcpy.c \
		ft_strrchr.c

OBJS = $(SRCS:.c=.o)

COMPILER = cc

FLAGS = -Wall -Werror -Wextra

%.o: %.c
	$(COMPILER) $(FLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)

all:	${NAME}

clean:
		rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	fclean all

.PHONY: all clean fclean re

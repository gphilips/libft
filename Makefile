# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gphilips <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 15:43:34 by gphilips          #+#    #+#              #
#    Updated: 2016/11/05 16:04:26 by gphilips         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c

SRCDIR = src/

SRCS = $(addprefix $(SRCDIR), $(FILES))

HEADER = include/libft.h

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	gcc -c $(HEADER) $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

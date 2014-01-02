# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/24 21:56:51 by apetit            #+#    #+#              #
#    Updated: 2014/01/01 22:40:13 by alexandre        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
NAME		= test

SRC			=	src/test.c

OBJ			= $(SRC:.c=.o)

CFLAGS		= -Wall -Werror -Wclobbered -Wempty-body -Wignored-qualifiers -Wmissing-field-initializers -Wmissing-parameter-type -Wold-style-declaration -Woverride-init -Wsign-compare -Wtype-limits -Wuninitialized -Wunused-but-set-parameter

LIBFT_DIR	= ./libft

RM			= rm -rf

all:		make_lib $(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) -L $(LIBFT_DIR)/ -lft

make_lib:
			cd $(LIBFT_DIR) && $(MAKE)

clean:
			cd $(LIBFT_DIR) && $(MAKE) $@
			$(RM) $(OBJ)

fclean:		clean
			cd $(LIBFT_DIR) && $(MAKE) $@
			$(RM) $(NAME)

re:			fclean all

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -I $(LIBFT_DIR)/includes/ -o $@ -g

.PHONY:		all clean re fclean

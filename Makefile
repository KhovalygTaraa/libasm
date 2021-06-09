# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swquinc <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/13 18:01:36 by swquinc           #+#    #+#              #
#    Updated: 2021/01/17 02:31:43 by hovalygta        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libasm.a

OBJ			= ft_strlen.o ft_strcpy.o ft_write.o ft_read.o ft_strdup.o ft_strcmp.o

HEAD		= libasm.h

СС			= gcc
CC_FLAGS	= -Wall -Wextra -Werror

AS			= nasm
AS_FLAGS	= -f macho64

AR			= ar rc

RULES		= all clean fclean re

.PHONY: $(RULES)

all: $(NAME)

$(NAME):
			$(AS) $(AS_FLAGS) ft_strlen.s
			$(AS) $(AS_FLAGS) ft_strcpy.s
			$(AS) $(AS_FLAGS) ft_write.s
			$(AS) $(AS_FLAGS) ft_read.s
			$(AS) $(AS_FLAGS) ft_strdup.s
			$(AS) $(AS_FLAGS) ft_strcmp.s
			$(AR) $(NAME) $(OBJ)
#			$(CC) $(CC_FLAGS) main.c $(NAME) -o libasm

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
re: fclean all


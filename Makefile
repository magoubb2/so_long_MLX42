# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabaron- <mabaron-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 15:32:58 by mabaron-          #+#    #+#              #
#    Updated: 2023/01/15 13:37:33 by mabaron-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long


CC		= gcc

CFLAGS	=	-Wall -Werror -Wextra 

LIB		= ./MLX42/libmlx42.a

RM		= rm -f 

MAKE_MLX = cd ./MLX42/ && make

SRC = main.c


OBJS = ${SRC:%.c=%.o}


all		: $(NAME)

$(NAME)	: $(OBJS)
	$(MAKE_MLX)
	$(CC) $(OBJS) $(LIB) $(CFLAGS) -o $(NAME) -lglfw -L "/Users/$$USER/.brew/opt/glfw/lib/" -I ./MLX42/include


clean	: 
	$(RM) $(OBJS) $(OBJS_B)

fclean	: clean
	$(RM) $(NAME)


re		: fclean all


# NAME = so_long

# SRC = main.c
# OBJ = $(SRC:.c=.o)

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror -Imlx
# RM = rm -f 
# MAKE_MLX = cd ./MLX42/ && make
# LIB	= ./MLX42/libmlx42.a

# all : $(NAME)

# $(NAME)	: $(OBJS)
# 	$(MAKE_MLX)
# 	$(CC) $(OBJS) $(LIB) $(CFLAGS) -o $(NAME) -lglfw -L "/Users/$$USER/.brew/opt/glfw/lib/" -I ./MLX42/include

# clean:
# 	@$(RM) $(OBJ) $(NAME)
# fclean: clean
# 	@$(RM) $(NAME)
# re: fclean all
#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbarbie <jbarbie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/20 18:44:07 by jbarbie           #+#    #+#              #
#    Updated: 2015/03/01 20:00:49 by vchaillo         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	game_2048

CC			=	gcc

CFLAGS		+=	-Wall -Wextra -Werror

SRC			=	colors.c \
				grid.c \
				main.c \
				menu.c \
				game.c \
				rand.c \
				move.c \
				paint.c \
				fusion.c \

LIBNCURSES 	= 	-lncurses

INC			=	-I inc/

OBJ			=	$(patsubst %.c, obj/%.o, $(SRC))

RM			=	rm -Rf

all         :   $(NAME)


$(NAME)		:	obj $(OBJ)
				@$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIBNCURSES)

obj/%.o		:	src/%.c
				@gcc $(CFLAGS) $(INC) -o $@ -c $<
				@echo "[\033[1;32m√\033[m]" $<

obj			:
				@mkdir -p obj

clean		:
				@echo "\033[33;31mCleaning files .o ...\033[0m"
				@$(RM) obj/

fclean		:	clean
				@echo "\033[33;31mCleaning executables...\033[0m"
				@$(RM) $(NAME)

norm:
				@echo "\033[32mnorminette...\033[0m"
				@norminette **/*.[ch]

re			:	fclean all

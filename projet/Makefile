# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/27 19:25:58 by vchaillo          #+#    #+#              #
#    Updated: 2015/02/28 16:12:30 by vchaillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game_2048

SRCS_NAME = main.c\
			grid.c\
			menu.c\

SRCS_PATH = ./srcs/

OBJS_NAME = $(SRCS_NAME:.c=.o)

OBJS_PATH = ./objs/

SRCS = $(addprefix $(SRCS_PATH),$(SRCS_NAME))

OBJS = $(addprefix $(OBJS_PATH),$(OBJS_NAME))

FLAGS = -Wall -Wextra -Werror

LIBFT = -Llibft -lft

LIBNCURSES =  -lncurses

LIBFT_H = -I libft/includes/

FDF_H = -I includes/

all: $(NAME)

$(NAME):
	@make -C libft/ fclean
	@make -C libft/
	@gcc -g $(FLAGS) $(LIBFT_H) $(FDF_H) -c $(SRCS)
	@mkdir $(OBJS_PATH)
	@mv $(OBJS_NAME) $(OBJS_PATH)
	@gcc -o $(NAME) $(OBJS) $(LIBFT) $(LIBNCURSES)
	@echo "\033[32mgame_2048 was created\033[0m"

norm:
	@echo "\033[32mnorminette...\033[0m"
	@norminette **/*.[ch]

clean:
	@rm -rf $(OBJS_PATH)
	@echo "\033[31mSuppression des .o\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[31mSuppression de game_2048\033[0m"

re: fclean all

.PHONY: all norm clean fclean re

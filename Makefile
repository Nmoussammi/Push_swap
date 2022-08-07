# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 11:48:47 by nmoussam          #+#    #+#              #
#    Updated: 2022/08/07 18:55:45 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = push_swap
FLAGS = -Wall -Wextra -Werror
CFILES = ft_check_arg.c push_swap.c utils1.c utils2.c
OFILES = $(CFILES:.c=.o)
INC = push_swap.h
RM = rm -rf

all: $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(FLAGS) $^ -o $(NAME)
	@echo "\033[1;35mCompiling Successfull"
	
%.o:%.c $(INC)
	@$(CC) $(FLAGS) -c $^ 

clean:
	@$(RM) $(OFILES) 
	@echo "\033[1;33mObject Files Removed Successfully"
	
fclean: clean
	@$(RM) $(NAME)
	
re: fclean all
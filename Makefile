# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/10 19:03:55 by nmoussam          #+#    #+#              #
#    Updated: 2022/08/20 22:08:34 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = push_swap
NAME_B = checker
FLAGS = -Wall -Wextra -Werror
CFILES = ./mandatory/ft_check_args.c ./mandatory/push_swap.c \
		./mandatory/utils1.c ./mandatory/utils2.c ./mandatory/utils3.c \
		./mandatory/sa_sb_ss.c ./mandatory/sort3_4_5.c ./mandatory/min_max.c \
		./mandatory/convert_to_binary.c ./mandatory/radix.c \
		./mandatory/rank.c 	./mandatory/ra_rb_rr.c \
		./mandatory/rra_rrb_rrr.c ./mandatory/pa_pb.c
CFILES_B = ./bonus/ft_check_args_bonus.c ./bonus/get_next_line/get_next_line.c \
			./bonus/get_next_line/get_next_line_utils.c ./bonus/utils1_bonus.c \
			./bonus/utils2_bonus.c ./bonus/utils3_bonus.c  \
			./bonus/push_swap_bonus.c ./bonus/pa_pb_bonus.c ./bonus/ra_rb_rr_bonus.c \
			./bonus/rra_rrb_rrr_bonus.c ./bonus/sa_sb_ss_bonus.c
OFILES_B = $(CFILES_B:.c=.o)
OFILES = $(CFILES:.c=.o)
INC = push_swap.h 
INC_B = push_swap_bonus.h
RM = rm -rf

all: $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(FLAGS) $^ -o $(NAME) 
	@echo "\033[1;35mCompiling Mandatory Successfull"
	
%.o:%.c $(INC) $(INC_B)
	@$(CC) $(FLAGS) -c $< -o $@ 
	
bonus: $(NAME_B)

$(NAME_B) : $(OFILES_B)
	@$(CC) $(FLAGS) $^ -o $(NAME_B) 
	@echo "\033[1;35mCompiling Bonus Successfull"

clean:
	@$(RM) $(OFILES) $(OFILES_B)
	@echo "\033[1;33mObject Files Removed Successfully"
	
fclean: clean
	@$(RM) $(NAME) $(NAME_B)
	
re: fclean all

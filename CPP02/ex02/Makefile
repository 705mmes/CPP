# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smunio <smunio@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 13:21:34 by sammeuss          #+#    #+#              #
#    Updated: 2024/01/25 11:51:44 by smunio           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ############################################################################
# #d88b_o8b  ,8b.     888  ,dP   ,d8PPPP   o8boooo    8888 888        ,d8PPPP#
# #d88 8'8b  88'8o    888o8P'    d88ooo    88booop    8888 888        d88ooo #
# #d88   8b  88PPY8.  888 Y8L  ,88'        88b        8888 888      ,88'     #
# #Y88   8P  8b   `Y' 888  `8p 88bdPPP     88P        8888 888PPPPP 88bdPPP  #
# ############################################################################

NAME        =	on_peut_parler
PRINT_NAME  =	CPP02
PRINT_PREFIX= \033[1m\033[38;5;240m[\033[0m\033[38;5;250m$(PRINT_NAME)\033[1m\033[38;5;240m] \033[38;5;105m~\033[0m

SRC 		=	main \
				Fixed.class \
				Fixed.functions \
				Fixed.operators \

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS        = $(addsuffix .cpp, $(SRC))
OBJS        = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
OBJ_DIR 	= obj

NUM_FILES   = $(words $(SRCS))
BAR_LENGTH  = $(shell echo "$$(($(NUM_FILES)*2))")

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
		@printf "$(PRINT_PREFIX)\033[0;38;5;226m Compiling \033[0m["
		@for i in $(shell seq 1 $(BAR_LENGTH)); do \
			sleep 0.1; \
			printf "\033[38;5;40m▲▼"; \
		done
		@printf "\033[38;5;40m] \033[0m\n"
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "$(PRINT_PREFIX)\033[0;32m Done \033[0;32m\n"

$(OBJ_DIR):
	@mkdir -p obj
	
$(OBJ_DIR)/%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@echo "$(PRINT_PREFIX)\033[0;38;5;226m Cleaning \033[0m\n"
		@rm -rf $(OBJ_DIR)
		@echo "$(PRINT_PREFIX)\033[0;32m Done \033[0;32m\n"

fclean: clean
		@rm -f $(NAME)

re: fclean all

run: all clean
	./$(NAME)

.PHONY: all clean fclean re
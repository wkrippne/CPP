# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkrippner <wkrippne@student.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 21:04:51 by kupferstrah       #+#    #+#              #
#    Updated: 2023/10/14 22:50:59 by wkrippner        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PHONEBOOK
CC		= c++
FLAGS	= -std=c++98 -Wall -Werror -Wextra
RM		= rm -rf

OBJDIR	= .objfiles
FILES	= main Contact PhoneBook
SRC		= $(FILES:=.cpp)
OBJ		= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER	= Contact.hpp PhoneBook.hpp

ifeq ($(DEBUG), 1)
	OPTS = -g
endif

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
		@$(CC) $(OBJ) $(OPTS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
		@mkdir -p $(dir $@)
		@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
		@$(RM) $(OBJDIR) $(OBJ)
	
fclean: clean
		@$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re bonus norm
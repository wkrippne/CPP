# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kupferstrahl <kupferstrahl@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 21:48:18 by kupferstrah       #+#    #+#              #
#    Updated: 2023/10/10 21:58:30 by kupferstrah      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

$(NAME):
	@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)

clean:
		@$(RM) $(NAME)

fclean:
		@$(RM) $(NAME)

re:	clean all
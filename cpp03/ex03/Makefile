# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 11:55:02 by aricholm          #+#    #+#              #
#    Updated: 2022/05/16 11:31:40 by aricholm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	diamondtrap
SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ		=	$(SRC:%.cpp=%.o)

CC		=	clang++
CFLAGS 	=	-Wextra -Werror -Wall
XFLAG	=	-std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(XFLAG) $(OBJ) -o $@

%.o: %.cpp
	$(CC) -c $(CFLAGS) $(XFLAG) -o $@ $<

clean:
	@echo "Removing object files"
	$(RM) $(OBJ)

fclean: clean
	@echo "Removing executable"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
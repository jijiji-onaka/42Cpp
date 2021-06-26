# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 14:16:52 by tjinichi          #+#    #+#              #
#    Updated: 2021/06/11 12:20:03 by tjinichi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CXX = clang++
CXXFLAGS = -g -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp \

OBJS = ${SRCS:.cpp=.o}

all: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

sanitize: CXXFLAGS += -g -fsanitize=address
sanitize: re

test: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

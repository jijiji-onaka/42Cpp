# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 14:16:52 by tjinichi          #+#    #+#              #
#    Updated: 2021/06/28 20:48:02 by tjinichi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphism

CXX = clang++
CXXFLAGS = -g -Wall -Werror -Wextra -std=c++98

OBJDIR = ./obj/

SRCS =	main.cpp \
		Sorcerer.cpp \
		Victim.cpp \
		Peon.cpp \
		Nobita.cpp \


OBJS = $(SRCS:%.cpp=$(OBJDIR)%.o)

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir -p obj

$(OBJDIR)%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

sanitize: CXXFLAGS += -g -fsanitize=address
sanitize: re
	./$(NAME)

leak: re
	valgrind --leak-check=full ./$(NAME)

test: re
	./$(NAME) | cat -e > mine
	diff mine true_output
	@rm -f mine

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

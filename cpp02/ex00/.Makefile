# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 14:16:52 by tjinichi          #+#    #+#              #
#    Updated: 2021/06/13 15:56:43 by tjinichi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CXX = clang++
CXXFLAGS = -g -Wall -Werror -Wextra -std=c++98

OBJDIR = ./obj/

SRCS =	main.cpp \
		Fixed.cpp \


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

test: re
	./$(NAME)
	./$(NAME) > mine
	diff mine .mihon
	@rm -f mine

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

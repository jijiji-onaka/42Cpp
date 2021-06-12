# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 14:16:52 by tjinichi          #+#    #+#              #
#    Updated: 2021/06/13 02:06:14 by tjinichi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CXX = clang++
CXXFLAGS = -g -Wall -Werror -Wextra -std=c++98

OBJDIR = ./obj/

SRCS =	main.cpp \


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
	./$(NAME) test1.txt "-" "+"
	./$(NAME) test2.txt "hello" "good evening"
	./$(NAME) test3.txt "hello" "hello"
	echo "last case(= error)"
	./$(NAME) empty.txt "-" "+" || true
	./$(NAME) obj 1 2

clean:
	rm -rf $(OBJDIR)
	rm -f test1.txt.replace
	rm -f test2.txt.replace
	rm -f test3.txt.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

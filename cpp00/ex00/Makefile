# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 14:16:52 by tjinichi          #+#    #+#              #
#    Updated: 2021/06/10 12:49:41 by tjinichi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = clang++
CXXFLAGS = -g -Wall -Werror -Wextra -std=c++98

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

sanitize: CXXFLAGS += -g -fsanitize=address
sanitize: re

test: all
	@echo "\n$(YELLOW)========= example =========$(RESET)"
	@echo "$(CYAAN)./megaphone shhhhh... I think the students are asleep...$(RESET)"
	@./megaphone "shhhhh... I think the students are asleep..."
	@echo "$(CYAAN)./megaphone Damnit  !  Sorry students, I thought this thing was off.$(RESET)"
	@./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	@echo "$(CYAAN)./megaphone$(RESET)"
	@./megaphone
	@echo "\n$(YELLOW)========= diff =========$(RESET)"
	echo "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." > subject
	./megaphone "shhhhh... I think the students are asleep..." > mine
	diff subject mine | cat -e
	@echo ""
	echo "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF." > subject
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off." > mine
	diff subject mine | cat -e
	@echo ""
	echo "* LOUD AND UNBEARABLE FEEDBACK NOISE *" > subject
	./megaphone > mine
	diff subject mine | cat -e
	@rm subject mine
	@echo "\n$(YELLOW)========= test =========$(RESET)"
	@echo "$(CYAAN)./megaphone こんにちは ɧɛɫˡɵːŴởȑľð Χαῖρε a A Здравствуйте سلام שלום Բարեւ$(RESET)"
	@./megaphone こんにちは ɧɛɫˡɵːŴởȑľð Χαῖρε a A Здравствуйте سلام שלום Բարեւ

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# color #
RESET		= \033[0m
RED			= \033[0;31m
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
MAGENT		= \033[0;35m
CYAAN		= \033[0;36m
WHITE		= \033[0;37m
B_RESET		= \033[0;49m
B_YELLOW	= \033[0;43m
B_CYAAN		= \033[0;46m
BOLD		= \033[1m
UNDER_LINE	= \033[0;4m

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:29:50 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/10 18:08:59 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void	check_command(std::string command, Contact contact[8], int &contact_count)
{
	if (command == "EXIT")
		command_EXIT();
	else if (command == "ADD")
		command_ADD(contact, contact_count);
	else if (command == "SEARCH")
		command_SEARCH(contact, contact_count);
	else
		command_NOT_FOUND();
}

void	input_command(std::string *command)
{
	char	chr;

	*command = "";
	while ((chr = std::cin.get()) != EOF && chr != '\n')
	{
		std::cout << CLEAR_CURSOR_RIGHT;
		command->push_back(chr);
	}
	if (chr == EOF)
	{
		std::cout << CLEAR_CURSOR_RIGHT << std::endl;
		std::cout <<
		BOLD""RED"You Pushed Ctrl+D\nOK. Done."RESET
		<< std::endl;
		std::exit(EXIT_FAILURE);
	}
}

void	explain_command(void)
{
	std::cout << BOLD""PURPLE"EXIT   :"RESET" Quit the program and delete the contacts." << std::endl;
	std::cout << BOLD""PURPLE"ADD    :"RESET" Add a contact." << std::endl;
	std::cout << BOLD""PURPLE"SEARCH :"RESET" Search through your contacts." << std::endl;
	std::cout << std::endl << BOLD""GREEN"Please enter command"RESET << std::endl;
}

int	main(void)
{
	std::string	command;
	Contact		contact[CONTACT_MAX];
	int			contact_count;

	explain_command();
	contact_count = 0;
	while (42)
	{
	puts("11");
		input_command(&command);
		check_command(command, contact, contact_count);
		std::cout << "ans -> [" << (int)command[0] << "]" << std::endl;
	}
	puts("12");
	return (0);
}

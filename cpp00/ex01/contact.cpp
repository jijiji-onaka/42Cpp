/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 00:18:41 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 01:18:53 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::set_first_name()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter first name"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->first_name = input;
		return ;
	}
}

void	Contact::set_last_name()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter last name"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->last_name = input;
		return ;
	}
}

void	Contact::set_nickname()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter nickname"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->nickname = input;
		return ;
	}
}

void	Contact::set_phone_number()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter phone number"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->phone_number = input;
		return ;
	}
}

void	Contact::set_darkest_secret()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter darkest secret"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->darkest_secret = input;
		return ;
	}
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

void	Contact::display_selected_field(void)
{
	std::cout << std::endl;
	std::cout << BOLD"first Name     : "RESET;
	std::cout << this->first_name << std::endl;
	std::cout << BOLD"last Name      : "RESET;
	std::cout << this->last_name << std::endl;
	std::cout << BOLD"nickname       : "RESET;
	std::cout << this->nickname << std::endl;
	std::cout << BOLD"phone number   : "RESET;
	std::cout << this->phone_number << std::endl;
	std::cout << BOLD"darkest secret : "RESET;
	std::cout << this->darkest_secret << std::endl;
	std::cout << std::endl;
}

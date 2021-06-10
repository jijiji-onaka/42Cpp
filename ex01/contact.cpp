/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 00:18:41 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/10 18:18:30 by tjinichi         ###   ########.fr       */
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

void	Contact::set_login()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter login"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->login = input;
		return ;
	}
}

void	Contact::set_postal_address()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter postal address"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->postal_address = input;
		return ;
	}
}

void	Contact::set_email_address()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter email address"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->email_address = input;
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

void	Contact::set_birthday_date()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter birthday date"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->birthday_date = input;
		return ;
	}
}

void	Contact::set_favorite_meal()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter favorite meal"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->favorite_meal = input;
		return ;
	}
}

void	Contact::set_underwear_color()
{
	std::string	input;
	while (42)
	{
		std::cout << BOLD""GREEN"Please enter underwear color"RESET << std::endl;
		input_command(&input);
		if (input == "")
		{
			std::cout << BOLD""YELLOW"It must not be empty."RESET << std::endl;
			continue ;
		}
		this->underwear_color = input;
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
	std::cout << BOLD"login          : "RESET;
	std::cout << this->login << std::endl;
	std::cout << BOLD"postal address : "RESET;
	std::cout << this->postal_address << std::endl;
	std::cout << BOLD"email address  : "RESET;
	std::cout << this->email_address << std::endl;
	std::cout << BOLD"phone number   : "RESET;
	std::cout << this->phone_number << std::endl;
	std::cout << BOLD"birthday date  : "RESET;
	std::cout << this->birthday_date << std::endl;
	std::cout << BOLD"favorite meal  : "RESET;
	std::cout << this->favorite_meal << std::endl;
	std::cout << BOLD"underwear color: "RESET;
	std::cout << this->underwear_color << std::endl;
	std::cout << BOLD"darkest secret : "RESET;
	std::cout << this->darkest_secret << std::endl;
	std::cout << std::endl;
}

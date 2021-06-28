/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 23:56:32 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 00:12:22 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	command_EXIT()
{
	std::exit(EXIT_SUCCESS);
}

void	command_ADD(Contact contact[8], int &contact_count, int &now_index)
{
	if (now_index == CONTACT_MAX)
		now_index = 0;
	std::cout << BOLD""BLUE"Let's create a new contact."RESET << std::endl;
	contact[now_index].set_first_name();
	contact[now_index].set_last_name();
	contact[now_index].set_nickname();
	contact[now_index].set_phone_number();
	contact[now_index].set_darkest_secret();
	std::cout << BOLD""BLUE"Done."RESET << std::endl;
	if (contact_count != CONTACT_MAX)
		++contact_count;
	++now_index;
}

static std::string	truncate_str(std::string field)
{
	if (field.length() <= FIELD_MAX)
		return (field);
	return (field.substr(0, 9) + '.');
}

void	command_SEARCH(Contact contact[8], int &contact_count)
{
	int	i;
	int	select_index;

	if (contact_count == 0)
	{
		std::cout <<
		BOLD""RED"No contacts are registered."RESET
		<< std::endl;
		return ;
	}
	std::cout << std::endl << "|     index|first name| last name|  nickname|" << std::endl;
	i = 0;
	while (i < contact_count)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate_str(contact[i].get_first_name()) << "|";
		std::cout << std::setw(10) << truncate_str(contact[i].get_last_name()) << "|";
		std::cout << std::setw(10) << truncate_str(contact[i].get_nickname()) << "|" << std::endl;
		++i;
	}
	std::cout << "---------------------------------------------" << std::endl;
	while (42)
	{
		std::string	temp;
		input_command(&temp);
		select_index = std::atoi(temp.c_str());
		if (temp.length() == 1 && temp.at(0) >= '0' && temp.at(0) <= '9'
				&& select_index < contact_count)
			break ;
		else
			std::cout <<
			BOLD""YELLOW"Please select the displayed index."RESET
			<< std::endl;
	}
	contact[select_index].display_selected_field();
}

void	command_NOT_FOUND()
{
	std::cout <<
	BOLD""YELLOW"There are only three commands you can type: EXIT, ADD, and SEARCH."RESET
	<< std::endl;
}

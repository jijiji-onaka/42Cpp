/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 21:23:06 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/10 16:48:33 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.hpp"

# define CLEAR_CURSOR_RIGHT "\033[0K"
# define YELLOW "\033[33m"
# define RED "\033[38;5;196m"
# define GREEN "\033[38;5;49m"
# define PURPLE "\033[38;5;105m"
# define BOLD "\033[1m"
# define RESET "\033[0m"
# define CONTACT_MAX 8
# define FIELD_MAX 10

/*
** COMMAND_CPP
*/
void	command_EXIT();
void	command_ADD(Contact contact[8], int &contact_count);
void	command_SEARCH(Contact contact[8], int &contact_count);
void	command_NOT_FOUND();
/*
** PHONEBOOK_CPP
*/
void	input_command(std::string *command);
void	explain_command(void);

#endif

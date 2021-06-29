/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 04:28:16 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 05:45:03 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cerr << GREEN""BOLD;
	std::cout << "* teleports from space *" << std::endl;
	std::cerr << RESET;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cerr << RED""BOLD;
	std::cout << "I'll be back..." << std::endl;
	std::cerr << RESET;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other)
{
	*this = other;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &other)
{
	(void)other;
	return (*this);
}

ISpaceMarine	*AssaultTerminator::clone(void) const
{
	ISpaceMarine	*clone;

	try
	{
		clone = new AssaultTerminator(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return (clone);
}

void	AssaultTerminator::battleCry(void) const
{
	std::cerr << BLUE""BOLD;
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	std::cerr << RESET;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cerr << YELLOW""BOLD;
	std::cout << "* does nothing *" << std::endl;
	std::cerr << RESET;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cerr << PINK""BOLD;
	std::cout << "* attacks with chainfists *" << std::endl;
	std::cerr << RESET;
}

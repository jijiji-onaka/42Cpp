/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:50:10 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 20:06:41 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void): Victim()
{
}

// Zog zog.
Peon::Peon(std::string name): Victim(name)
{
	std::cerr << GREEN""BOLD;
	std::cout << "Zog zog." << std::endl;
	std::cerr << RESET;
}

// Bleuark...
Peon::~Peon(void)
{
	std::cerr << RED""BOLD;
	std::cout << "Bleuark..." << std::endl;
	std::cerr << RESET;
}

Peon::Peon(Peon const &other)
{
	*this = other;
}

Peon &Peon::operator=(Peon const &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
	}
	return (*this);
}

// NAME has been turned into a pink pony!
void	Peon::getPolymorphed(void) const
{
	std::cerr << BLUE""BOLD;
	std::cout << this->name_ << " has been turned into a pink pony!" << std::endl;
	std::cerr << RESET;
}

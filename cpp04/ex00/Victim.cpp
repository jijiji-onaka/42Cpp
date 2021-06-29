/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:29:08 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 20:05:28 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
}

// Some random victim called NAME just appeared!
Victim::Victim(std::string name): name_(name)
{
	std::cerr << GREEN""BOLD;
	std::cout << "Some random victim called " << this->name_ << " just appeared!" << std::endl;
	std::cerr << RESET;
}

// Victim NAME just died for no apparent reason!
Victim::~Victim(void)
{
	std::cerr << RED""BOLD;
	std::cout << "Victim " << this->name_ << " just died for no apparent reason!" << std::endl;
	std::cerr << RESET;
}

Victim::Victim(Victim const &other)
{
	*this = other;
}

Victim &Victim::operator=(Victim const &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
	}
	return (*this);
}

std::string	Victim::get_name(void) const
{
	return (this->name_);
}

// NAME has been turned into a cute little sheep!
void	Victim::getPolymorphed(void) const
{
	std::cerr << BLUE""BOLD;
	std::cout << this->name_ << " has been turned into a cute little sheep!" << std::endl;
	std::cerr << RESET;
}

// I'm NAME and I like otters!
std::ostream &operator<<(std::ostream &os, Victim const &victim)
{
	std::cerr << YELLOW""BOLD;
	os << "I'm " << victim.get_name() << " and I like otters!" << std::endl;
	std::cerr << RESET;
	return os;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:36:30 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 20:23:45 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
}

// NAME, TITLE, is born!
Sorcerer::Sorcerer(std::string name, std::string title): name_(name), title_(title)
{
	std::cerr << GREEN""BOLD;
	std::cout << this->name_ << ", " << this->title_ << ", is born!" << std::endl;
	std::cerr << RESET;
}


// NAME, TITLE, is dead. Consequences will never be the same!
Sorcerer::~Sorcerer(void)
{
	std::cerr << RED""BOLD;
	std::cout << this->name_ << ", " << this->title_ << ", is dead. Consequences will never be the same!" << std::endl;
	std::cerr << RESET;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	*this = other;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
		this->title_ = other.title_;
	}
	return (*this);
}

std::string	Sorcerer::get_name(void) const
{
	return (this->name_);
}

std::string	Sorcerer::get_title(void) const
{
	return (this->title_);
}

void	Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

// I am NAME, TITLE, and I like ponies!
std::ostream &operator<<(std::ostream &os, Sorcerer const &sorcerer)
{
	std::cerr << YELLOW""BOLD;
	os << "I am " << sorcerer.get_name() << ", " << sorcerer.get_title() << ", and I like ponies!" << std::endl;
	std::cerr << RESET;
	return os;
}

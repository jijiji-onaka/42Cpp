/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nobita.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:38:25 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 20:49:43 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nobita.hpp"

Nobita::Nobita(void): Victim()
{
}

Nobita::Nobita(std::string name): Victim(name)
{
	std::cerr << GREEN""BOLD;
	std::cout << "Doraemoooooooooooooon!!" << std::endl;
	std::cerr << RESET;
}

Nobita::~Nobita(void)
{
	std::cerr << RED""BOLD;
	std::cout << "Gian....(;;)" << std::endl;
	std::cerr << RESET;
}

Nobita::Nobita(Nobita const &other)
{
	*this = other;
}

Nobita &Nobita::operator=(Nobita const &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
	}
	return (*this);
}

void	Nobita::getPolymorphed(void) const
{
	std::cerr << BLUE""BOLD;
	std::cout << this->name_ << " has been turned into small!" << std::endl;
	std::cerr << RESET;
}

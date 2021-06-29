/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 07:19:30 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 09:14:05 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::~Cure(void)
{
}

Cure::Cure(Cure const &other) : AMateria("cure")
{
	*this = other;
}

Cure &Cure::operator=(Cure const &other)
{
	if (this != &other)
	{
		this->_xp = other._xp;
	}
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	AMateria	*res;

	try
	{
		res = new Cure(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::exit(EXIT_FAILURE);
	}
	return (res);
}

// "* heals NAME’s wounds *"
void	Cure::use(ICharacter& target)
{
	this->AMateria::use(target);
	std::cerr << ORANGE""BOLD;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	std::cerr << RESET;
}

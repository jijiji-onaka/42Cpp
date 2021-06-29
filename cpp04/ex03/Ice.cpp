/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 07:26:41 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 09:13:53 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(Ice const &other) : AMateria("ice")
{
	*this = other;
}

Ice &Ice::operator=(Ice const &other)
{
	if (this != &other)
	{
		this->_xp = other._xp;
	}
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	AMateria	*res;

	try
	{
		res = new Ice(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::exit(EXIT_FAILURE);
	}
	return (res);
}

//  "* shoots an ice bolt at NAME *"
void	Ice::use(ICharacter& target)
{
	this->AMateria::use(target);
	std::cerr << ORANGE""BOLD;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	std::cerr << RESET;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 07:10:17 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 09:12:58 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const &type) : type_(type), _xp(0)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	if (this != &other)
	{
		this->_xp = other._xp;
	}
	return (*this);
}

std::string	const	&AMateria::getType(void) const
{
	return (this->type_);
}

unsigned int	AMateria::getXP(void) const
{
	return (this->_xp);
}

void	AMateria::use(ICharacter &)
{
	this->_xp += XP_UP;
}

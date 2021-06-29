/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 23:25:32 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 02:42:46 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist(void)
{
}

PowerFist::PowerFist(PowerFist const &other)
{
	*this = other;
}

PowerFist &PowerFist::operator=(PowerFist const &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
		this->actionPoints_ = other.actionPoints_;
		this->damagePoints_ = other.damagePoints_;
	}
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cerr << BLUE""BOLD;
	std::cout << "* pschhh... SBAM! *" << std::endl;
	std::cerr << RESET;
}

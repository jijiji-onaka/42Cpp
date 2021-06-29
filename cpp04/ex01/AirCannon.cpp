/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AirCannon.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 02:57:01 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:05:34 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AirCannon.hpp"

AirCannon::AirCannon(void) : AWeapon("Air Cannon", AC_AP_COST, AC_AP_DAMAGE)
{
}

AirCannon::~AirCannon(void)
{
}

AirCannon::AirCannon(AirCannon const &other)
{
	*this = other;
}

AirCannon &AirCannon::operator=(AirCannon const &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
		this->actionPoints_ = other.actionPoints_;
		this->damagePoints_ = other.damagePoints_;
	}
	return (*this);
}

void	AirCannon::attack(void) const
{
	std::cerr << BLUE""BOLD;
	std::cout << "* Boooooooooooooooom!!!!!!!!!! *" << std::endl;
	std::cerr << RESET;
}

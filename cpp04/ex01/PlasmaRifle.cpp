/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 23:21:09 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 02:54:58 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other)
{
	*this = other;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
		this->actionPoints_ = other.actionPoints_;
		this->damagePoints_ = other.damagePoints_;
	}
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cerr << BLUE""BOLD;
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	std::cerr << RESET;
}

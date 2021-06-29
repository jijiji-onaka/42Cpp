/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 21:02:28 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:40:06 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): name_(name), actionPoints_(apcost), damagePoints_(damage)
{
}

AWeapon::~AWeapon(void)
{
}

AWeapon::AWeapon(AWeapon const &other)
{
	*this = other;
}

AWeapon &AWeapon::operator=(AWeapon const &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
		this->actionPoints_ = other.actionPoints_;
		this->damagePoints_ = other.damagePoints_;
	}
	return (*this);
}

std::string const	&AWeapon::getName(void) const
{
	return (this->name_);
}

int	AWeapon::getAPCost(void) const
{
	return (this->actionPoints_);
}

int	AWeapon::getDamage(void) const
{
	return (this->damagePoints_);
}

void AWeapon::attack() const
{
}

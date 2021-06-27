/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 21:43:23 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 22:50:57 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap()
{
	this->Hitpoints_ = this->FragTrap::Hitpoints_;
	this->points_ = this->ScavTrap::points_;
	this->damege_ = this->FragTrap::damege_;
	std::cout << GREEN""BOLD"[DT]As yet I have no name."RESET << std::endl;
	std::cout << "     Name -> " << this->Name_ << std::endl;
	std::cout << " Hitpoint -> " << this->Hitpoints_ << std::endl;
	std::cout << "    point -> " << this->points_ << std::endl;
	std::cout << "   damege -> " << this->damege_ << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name): ClapTrap(Name)
{
	this->Hitpoints_ = this->FragTrap::Hitpoints_;
	this->points_ = this->ScavTrap::points_;
	this->damege_ = this->FragTrap::damege_;
	std::cout << GREEN""BOLD"[DT]Hello!!"RESET << std::endl;
	std::cout << "     Name -> " << this->Name_ << std::endl;
	std::cout << " Hitpoint -> " << this->Hitpoints_ << std::endl;
	std::cout << "    point -> " << this->points_ << std::endl;
	std::cout << "   damege -> " << this->damege_ << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	if (this->Name_ != "")
		std::cout << RED""BOLD"[DT]I am " << this->Name_;
	else
		std::cout << RED""BOLD"[DT]I am unknown";
	std::cout << RED""BOLD". I'm going home..."RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other)
{
	if (this != &other)
	{
		this->Name_ = other.Name_;
		this->Hitpoints_ = other.Hitpoints_;
		this->points_ = other.points_;
		this->damege_ = other.damege_;
	}
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

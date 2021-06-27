/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 08:48:11 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 20:24:40 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): Name_("unknown"), Hitpoints_(10), points_(10), damege_(0)
{
	std::cout << GREEN""BOLD"[CT]As yet I have no name."RESET << std::endl;
	std::cout << "     Name -> " << this->Name_ << std::endl;
	std::cout << " Hitpoint -> " << this->Hitpoints_ << std::endl;
	std::cout << "    point -> " << this->points_ << std::endl;
	std::cout << "   damege -> " << this->damege_ << std::endl;
}

ClapTrap::ClapTrap(std::string Name): Name_(Name), Hitpoints_(10), points_(10), damege_(0)
{
	std::cout << GREEN""BOLD"[CT]Hello!!"RESET << std::endl;
	std::cout << "     Name -> " << this->Name_ << std::endl;
	std::cout << " Hitpoint -> " << this->Hitpoints_ << std::endl;
	std::cout << "    point -> " << this->points_ << std::endl;
	std::cout << "   damege -> " << this->damege_ << std::endl;
}

ClapTrap::~ClapTrap()
{
	if (this->Name_ != "")
		std::cout << RED""BOLD"[CT]I am " << this->Name_;
	else
		std::cout << RED""BOLD"[CT]I am unknown";
	std::cout << RED""BOLD". I'm going home..."RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
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

void	ClapTrap::attack(std::string const &target)
{
	std::cout << YELLOW""BOLD"[CT]FR4G-TP <" << this->Name_ << "> attacks <" << target << ">, causing <" << this->damege_ << "> points of damage!"RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << PURPLE""BOLD"[CT]FR4G-TP <" << this->Name_ << "> has taken <" << amount << "> damege."RESET << std::endl;
	if (this->Hitpoints_ < amount)
		this->Hitpoints_ = 0;
	else
		this->Hitpoints_ -= amount;
	std::cout << "     Name -> " << this->Name_ << std::endl;
	std::cout << " Hitpoint -> " << this->Hitpoints_ << std::endl;
	std::cout << "    point -> " << this->points_ << std::endl;
	std::cout << "   damege -> " << this->damege_ << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints_ += amount;
	std::cout << BLUE""BOLD"[CT]FR4G-TP <" << this->Name_ << "> has repaired <" << amount << "> HP."RESET << std::endl;
	std::cout << "     Name -> " << this->Name_ << std::endl;
	std::cout << " Hitpoint -> " << this->Hitpoints_ << std::endl;
	std::cout << "    point -> " << this->points_ << std::endl;
	std::cout << "   damege -> " << this->damege_ << std::endl;
}

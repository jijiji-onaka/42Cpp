/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:14:06 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 18:21:41 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->Hitpoints_ = 100;
	this->points_ = 50;
	this->damege_ = 20;
	std::cout << GREEN""BOLD"[ST]As yet I have no name."RESET << std::endl;
	std::cout << "     Name -> " << this->Name_ << std::endl;
	std::cout << " Hitpoint -> " << this->Hitpoints_ << std::endl;
	std::cout << "    point -> " << this->points_ << std::endl;
	std::cout << "   damege -> " << this->damege_ << std::endl;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
	this->Hitpoints_ = 100;
	this->points_ = 50;
	this->damege_ = 20;
	std::cout << GREEN""BOLD"[ST]Hello!!"RESET << std::endl;
	std::cout << "     Name -> " << this->Name_ << std::endl;
	std::cout << " Hitpoint -> " << this->Hitpoints_ << std::endl;
	std::cout << "    point -> " << this->points_ << std::endl;
	std::cout << "   damege -> " << this->damege_ << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	if (this->Name_ != "")
		std::cout << RED""BOLD"[ST]I am " << this->Name_;
	else
		std::cout << RED""BOLD"[ST]I am unknown";
	std::cout << RED""BOLD". I'm going home..."RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	*this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
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

void	ScavTrap::guardGate(void)
{
	std::cout << GREEN_1""BOLD"[ST]<" << this->Name_ << "> have enterred in Gate keeper mode."RESET << std::endl;
}

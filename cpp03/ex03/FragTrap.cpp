/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 21:22:44 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 18:19:46 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->Hitpoints_ = 100;
	this->points_ = 100;
	this->damege_ = 30;
	std::cout << GREEN""BOLD"[FT]As yet I have no name."RESET << std::endl;
	std::cout << "     Name -> " << this->Name_ << std::endl;
	std::cout << " Hitpoint -> " << this->Hitpoints_ << std::endl;
	std::cout << "    point -> " << this->points_ << std::endl;
	std::cout << "   damege -> " << this->damege_ << std::endl;
}

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	this->Hitpoints_ = 100;
	this->points_ = 100;
	this->damege_ = 30;
	std::cout << GREEN""BOLD"[FT]Hello!!"RESET << std::endl;
	std::cout << "     Name -> " << this->Name_ << std::endl;
	std::cout << " Hitpoint -> " << this->Hitpoints_ << std::endl;
	std::cout << "    point -> " << this->points_ << std::endl;
	std::cout << "   damege -> " << this->damege_ << std::endl;
}

FragTrap::~FragTrap(void)
{
	if (this->Name_ != "")
		std::cout << RED""BOLD"[FT]I am " << this->Name_;
	else
		std::cout << RED""BOLD"[FT]I am unknown";
	std::cout << RED""BOLD". I'm going home..."RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
	*this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << PINK""BOLD"[FT]I am <" << this->Name_ << ">. High five, please."RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 00:21:45 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:39:54 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
}

Character::Character(std::string const & name) : name_(name), actionPoints_(MAX_AP), weapon_(NULL)
{
}

Character::~Character(void)
{
}

Character::Character(Character const &other)
{
	*this = other;
}

Character &Character::operator=(Character const &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
		this->actionPoints_ = other.actionPoints_;
		this->weapon_ = other.weapon_;
	}
	return (*this);
}

void	Character::recoverAP(void)
{
	if (this->actionPoints_ + RECOVER_AP >= MAX_AP)
		this->actionPoints_ = MAX_AP;
	else
		this->actionPoints_ += RECOVER_AP;
	std::cerr << ORANGE""BOLD;
	std::cout << this->name_ << " ecovered AP. " << this->name_ << " has " << this->actionPoints_ << " AP" << std::endl;
	std::cerr << RESET;
}

void	Character::equip(AWeapon *weapon)
{
	this->weapon_ = weapon;
}

//"NAME attacks ENEMY_TYPE with a WEAPON_NAME"
void	Character::attack(Enemy *enemy)
{
	if (this->weapon_ == NULL)
		return ;
	else if (enemy == NULL)
	{
		std::cerr << RED_1""BOLD;
		std::cout << "Wanted to attack, but there were no enemies." << std::endl;
		std::cerr << RESET;
		return ;
	}
	else if (this->actionPoints_ < this->weapon_->getAPCost())
	{
		std::cerr << PURPLE""BOLD;
		std::cout << this->name_ << " is " << this->weapon_->getAPCost() - this->actionPoints_ << " AP short!!" << std::endl;
		std::cerr << RESET;
		return ;
	}
	std::cerr << YELLOW""BOLD;
	std::cout << this->name_ << " attacks " << enemy->getType() << " with a " << this->weapon_->getName() << std::endl;
	std::cerr << RESET;
	this->weapon_->attack();
	this->actionPoints_ -= this->weapon_->getAPCost();
	enemy->takeDamage(this->weapon_->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::string const	&Character::getName(void) const
{
	return (this->name_);
}

int	Character::getAP(void) const
{
	return (this->actionPoints_);
}

AWeapon	*Character::getWeapon(void) const
{
	return (this->weapon_);
}

// NAME has AP_NUMBER AP and wields a WEAPON_NAME
// NAME has AP_NUMBER AP and is unarmed
std::ostream &operator<<(std::ostream &os, Character const &character)
{
	std::cerr << PINK""BOLD;
	os << character.getName() << " has " << character.getAP() << " AP and ";
	AWeapon	*tmp = character.getWeapon();
	if (tmp == NULL)
		os << "is unarmed" << std::endl;
	else
		os << "wields a " << tmp->getName() << std::endl;
	std::cerr << RESET;
	return (os);
}

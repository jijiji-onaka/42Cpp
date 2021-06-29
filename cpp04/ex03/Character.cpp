/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 07:09:13 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 11:33:00 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
}

Character::Character(std::string name) : name_(name), MateriaNum_(0)
{
	this->Materia_[0] = NULL;
	this->Materia_[1] = NULL;
	this->Materia_[2] = NULL;
	this->Materia_[3] = NULL;
}

Character::~Character(void)
{
	for (int i = 0; i < this->MateriaNum_; i++)
	{
		delete Materia_[i];
	}
}

Character::Character(Character const &other)
{
	this->name_ = other.name_;
	this->MateriaNum_ = 0;
	for (int i = 0; i < other.MateriaNum_; i++)
		equip(other.Materia_[i]->clone());
}

Character &Character::operator=(Character const &other)
{
	this->name_ = other.name_;
	this->MateriaNum_ = 0;
	for (int i = 0; i < this->MateriaNum_; i++)
		delete Materia_[i];
	for (int i = 0; i < other.MateriaNum_; i++)
		equip(other.Materia_[i]->clone());
	return (*this);
}

std::string	const	&Character::getName(void) const
{
	return (this->name_);
}

void	Character::equip(AMateria *m)
{
	if (m == NULL || this->MateriaNum_ == MATERIA_MAX)
		return ;
	for (int i = 0; i < this->MateriaNum_; ++i)
		if (this->Materia_[i] == m)
			return ;
	this->Materia_[this->MateriaNum_] = m;
	++this->MateriaNum_;
}
void	Character::unequip(int idx)
{
	if (idx < 0 || MATERIA_MAX <= idx || this->MateriaNum_ <= 0)
		return ;
	if (idx == 3)
		this->Materia_[3] = NULL;
	else
		for (int i = idx; i < 3; ++i)
		{
			this->Materia_[i] = this->Materia_[i + 1];
			this->Materia_[i + 1] = NULL;
		}
	--this->MateriaNum_;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || this->MateriaNum_ <= idx)
		return ;
	this->Materia_[idx]->use(target);
}

void	Character::putStatus(int idx)
{
	if (this->Materia_[idx] == NULL)
		std::cout << BOLD"idx = " << idx << ", Empty"RESET << std::endl;
	else
		std::cout << BOLD"idx = " << idx << ", Type = [" << this->Materia_[idx]->getType() << "], XP = <" << this->Materia_[idx]->getXP() << ">"RESET << std::endl;
}

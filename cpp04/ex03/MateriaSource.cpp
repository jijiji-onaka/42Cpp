/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 07:54:58 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 10:18:02 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : MateriaNum_(0)
{
	this->Materia_[0] = NULL;
	this->Materia_[1] = NULL;
	this->Materia_[2] = NULL;
	this->Materia_[3] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->MateriaNum_; i++)
		delete Materia_[i];
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	this->MateriaNum_ = 0;
	for (int i = 0; i < other.MateriaNum_; i++)
		learnMateria(other.Materia_[i]->clone());
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < this->MateriaNum_; i++)
		delete Materia_[i];
	this->MateriaNum_ = 0;
	for (int i = 0; i < other.MateriaNum_; i++)
		learnMateria(other.Materia_[i]->clone());
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (materia == NULL || this->MateriaNum_ == 4)
		return ;
	Materia_[this->MateriaNum_] = materia;
	++this->MateriaNum_;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->MateriaNum_; i++)
		if (Materia_[i]->getType() == type)
			return (Materia_[i]->clone());
	return (NULL);
}

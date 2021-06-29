/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 23:49:57 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:14:45 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cerr << GREEN""BOLD;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	std::cerr << RESET;
}

SuperMutant::~SuperMutant(void)
{
	std::cerr << RED""BOLD;
	std::cout << "Aaargh..." << std::endl;
	std::cerr << RESET;
}

SuperMutant::SuperMutant(SuperMutant const &other)
{
	*this = other;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &other)
{
	if (this != &other)
	{
		this->type_ = other.type_;
		this->hitPoints_ = other.hitPoints_;
	}
	return (*this);
}

void	SuperMutant::takeDamage(int damagePoints)
{
	Enemy::takeDamage(damagePoints - 3);
}

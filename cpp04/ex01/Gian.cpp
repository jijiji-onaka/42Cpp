/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gian.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 03:08:07 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:15:26 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Gian.hpp"

Gian::Gian(void) : Enemy(GIAN_HP, "Gian")
{
	std::cerr << GREEN""BOLD;
	std::cout << "I am Gian! boss of the children!!" << std::endl;
	std::cerr << RESET;
}

Gian::~Gian(void)
{
	std::cerr << RED""BOLD;
	std::cout << "Mama..." << std::endl;
	std::cerr << RESET;
}

Gian::Gian(Gian const &other)
{
	*this = other;
}

Gian &Gian::operator=(Gian const &other)
{
	if (this != &other)
	{
		this->type_ = other.type_;
		this->hitPoints_ = other.hitPoints_;
	}
	return (*this);
}

void	Gian::takeDamage(int damagePoints)
{
	Enemy::takeDamage(damagePoints - 10);
}

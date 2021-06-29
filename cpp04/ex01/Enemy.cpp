/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 23:40:42 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:40:49 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
}

Enemy::Enemy(int hp, std::string const &type) : hitPoints_(hp), type_(type)
{
}

Enemy::~Enemy(void)
{
}

Enemy::Enemy(Enemy const &other)
{
	*this = other;
}

Enemy &Enemy::operator=(Enemy const &other)
{
	if (this != &other)
	{
		this->hitPoints_ = other.hitPoints_;
		this->type_ = other.type_;
	}
	return (*this);
}

std::string const	&Enemy::getType() const
{
	return (this->type_);
}

int	Enemy::getHP() const
{
	return (this->hitPoints_);
}

void	Enemy::takeDamage(int damagePoints)
{
	if (damagePoints <= 0)
		return ;
	if (this->hitPoints_ <= damagePoints)
		this->hitPoints_ = 0;
	else
		this->hitPoints_ -= damagePoints;
}

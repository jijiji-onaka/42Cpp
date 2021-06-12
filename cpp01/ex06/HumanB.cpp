/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 22:32:20 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/12 23:06:40 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon_ = &weapon;
}

void	HumanB::attack(void)
{
	// if (this->weapon_ == NULL) -> 19行目が参照だからいらない
	std::cout << ORANGE""BOLD << this->name_ << RESET" attack with his "
		<< PURPLE""BOLD << this->weapon_->getType() << RESET << std::endl;
}

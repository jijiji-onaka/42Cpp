/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 22:32:20 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 03:48:27 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const char *name)
{
	if (name == NULL)
	{
		std::cout << RED""BOLD << "The person cannot be NULL."RESET << std::endl;
		std::exit(EXIT_FAILURE);
	}
	this->name_ = name;
	this->weapon_ = NULL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon_ = &weapon;
}

void	HumanB::attack(void)
{
	if (this->weapon_ != NULL)
		std::cout << ORANGE""BOLD << this->name_ << RESET" attack with his "
			<< PURPLE""BOLD << this->weapon_->getType() << RESET << std::endl;
	else
		std::cout << ORANGE""BOLD << this->name_ << RESET" has no weapon." << std::endl;
}

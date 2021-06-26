/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 21:12:49 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 03:43:20 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type_ = type;
}

const std::string	&Weapon::getType(void)
{
	return (this->type_);
}

void	Weapon::setType(const char *type)
{
	this->type_ = type;
}

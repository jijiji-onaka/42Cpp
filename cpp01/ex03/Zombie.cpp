/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 03:01:39 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/11 12:19:02 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name_ = name;
	this->type_ = type;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name_ << " (" << this->type_ << ")> " << RED""BOLD"died"RESET << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name_ = name;
}

void	Zombie::set_type(std::string type)
{
	this->type_ = type;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name_ << " (" << this->type_ << ")> " << DULL_GREEN""BOLD"Braiiiiiiinnnssss..."RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 03:01:39 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 01:57:56 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name_ = name;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name_ << "> " << RED""BOLD"died"RESET << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name_ << "> " << DULL_GREEN""BOLD"Braiiiiiiinnnssss..."RESET << std::endl;
}

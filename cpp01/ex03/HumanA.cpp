/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 21:27:22 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/12 22:44:26 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), weapon_(weapon)
{
}

void	HumanA::attack(void)
{
	std::cout << ORANGE""BOLD << this->name_ << RESET" attack with his "
		<< PURPLE""BOLD << this->weapon_.getType() << RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 00:00:09 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 00:05:50 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cerr << GREEN""BOLD;
	std::cout << "* click click click *" << std::endl;
	std::cerr << RESET;
}

RadScorpion::~RadScorpion(void)
{
	std::cerr << RED""BOLD;
	std::cout << "* SPROTCH *" << std::endl;
	std::cerr << RESET;
}

RadScorpion::RadScorpion(RadScorpion const &other)
{
	*this = other;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &other)
{
	if (this != &other)
	{
		this->type_ = other.type_;
		this->hitPoints_ = other.hitPoints_;
	}
	return (*this);
}

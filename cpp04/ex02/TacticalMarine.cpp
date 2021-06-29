/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 04:13:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 05:45:08 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cerr << GREEN""BOLD;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	std::cerr << RESET;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cerr << RED""BOLD;
	std::cout << "Aaargh..." << std::endl;
	std::cerr << RESET;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other)
{
	*this = other;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &other)
{
	(void)other;
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone(void) const
{
	ISpaceMarine	*clone;

	try
	{
		clone = new TacticalMarine(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return (clone);
}

void	TacticalMarine::battleCry(void) const
{
	std::cerr << BLUE""BOLD;
	std::cout << "For the holy PLOT!" << std::endl;
	std::cerr << RESET;
}

void	TacticalMarine::rangedAttack(void) const
{
	std::cerr << YELLOW""BOLD;
	std::cout << "* attacks with a bolter *" << std::endl;
	std::cerr << RESET;
}

void	TacticalMarine::meleeAttack(void) const
{
	std::cerr << PINK""BOLD;
	std::cout << "* attacks with a chainsword *" << std::endl;
	std::cerr << RESET;
}

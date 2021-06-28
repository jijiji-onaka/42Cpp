/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:21:42 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 18:02:07 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	unknown;
	DiamondTrap	cat("cat");

	unknown.attack("me");
	cat.attack("dog");
	unknown.takeDamage(1000);
	cat.takeDamage(10);
	unknown.beRepaired(1000);
	cat.beRepaired(10);

	unknown.guardGate();
	cat.guardGate();

	unknown.highFivesGuys();
	cat.highFivesGuys();

	unknown.whoAmI();
	cat.whoAmI();
}

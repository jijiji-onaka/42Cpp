/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:21:42 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 23:48:09 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	unknown;
	FragTrap	cat("cat");
	FragTrap	cat2 = cat;

	cat2.attack("cat");
	cat2 = unknown;
	cat2.attack("cat");
	unknown.attack("me");
	cat.attack("dog");
	unknown.takeDamage(1000);
	cat.takeDamage(10);
	unknown.beRepaired(1000);
	cat.beRepaired(10);

	unknown.highFivesGuys();
	cat.highFivesGuys();
}

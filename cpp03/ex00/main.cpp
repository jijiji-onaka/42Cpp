/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:21:42 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 19:58:44 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	unknown;
	ClapTrap	cat("cat");
	ClapTrap	cat2 = cat;

	cat2.attack("cat");
	cat2 = unknown;
	cat2.attack("cat");
	unknown.attack("me");
	cat.attack("dog");
	unknown.takeDamage(11);
	cat.takeDamage(4);
	unknown.beRepaired(11);
	cat.beRepaired(4);
}

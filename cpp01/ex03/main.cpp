/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:14:36 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/11 12:22:29 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void)
{
	std::srand(std::time(NULL));

	int	rand_num = std::rand() % 10;
	std:: cout << GREEN""BOLD"int N = "<< rand_num << RESET << std::endl;
	ZombieHorde Zombie_Horde(rand_num);
	Zombie_Horde.announce();
	return (0);
}

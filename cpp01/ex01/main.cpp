/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:14:36 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 02:55:10 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::srand(std::time(NULL));

	int	rand_num = std::rand() % 10;
	std:: cout << GREEN""BOLD"int N = "<< rand_num << RESET << std::endl;
	std::string	names[] = {"Doraemon", "Noby", "Sue", "Sneech", "Big G", "Ace Goody"};

	Zombie *zombies = zombieHorde(rand_num, names[std::rand() % 5]);
	for (int i = 0; i < rand_num; ++i)
	{
		zombies[i].announce();
	}
	delete []zombies;
	return (0);
}

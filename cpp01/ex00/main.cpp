/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 01:32:06 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 02:10:29 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(void)
{
	std::srand(std::time(NULL));

	std::cout << GREEN""BOLD"Zombie"RESET << std::endl;

	Zombie	*zombie = newZombie("Zombie");
	zombie->announce();
	delete zombie;

	std::cout << std::endl;

	std::cout <<  GREEN""BOLD"Random Zombie"RESET << std::endl;
	std::string	names[] = {"Doraemon", "Noby", "Sue", "Sneech", "Big G", "Ace Goody"};
	for (int i = 0; i < 10; ++i)
		randomChump(names[std::rand() % 5]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 01:32:06 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/13 00:15:39 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieEvent.hpp"

void	randomChump(void)
{
	std::string	names[] = {"Doraemon", "Noby", "Sue", "Sneech", "Big G", "Ace Goody"};
	std::string	types[] = {"Cat-shaped robot", "hero", "Heroine", "Mean", "Rowdy", "Smart"};
	Zombie		*randam_zombie;

	try
	{
		randam_zombie = new Zombie(names[std::rand() % 5], types[std::rand() % 5]);
	}
	catch(std::bad_alloc e)
	{
		std::cerr << "randomChump: " << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	randam_zombie->announce();
	delete randam_zombie;
}

int	main(void)
{
	std::srand(std::time(NULL));

	std::cout << GREEN""BOLD"Stack Zombie"RESET << std::endl;
	Zombie	stack_zombie("Stack Zombie", "Easy");
	stack_zombie.announce();
	std::cout << std::endl;


	std::cout << GREEN""BOLD"Heap Zombie"RESET << std::endl;
	Zombie	*heap_zombie;
	try
	{
		heap_zombie = new Zombie("Heap Zombie", "Convenient");
	}
	catch(std::bad_alloc e)
	{
		std::cerr << "main: " << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	heap_zombie->announce();
	delete heap_zombie;
	std::cout << std::endl;

	std::cout <<  GREEN""BOLD"Random Zombie"RESET << std::endl;
	for (int i = 0; i < 10; ++i)
		randomChump();
	std::cout << std::endl;

	std::cout << GREEN""BOLD"Zombie Event Zombie"RESET << std::endl;
	ZombieEvent event_zombie;
	event_zombie.setZombieType("Event");
	Zombie *heap_event_zombie = event_zombie.newZombie("Event Zombie");
	heap_event_zombie->announce();
	delete heap_event_zombie;
	std::cout << std::endl;
}

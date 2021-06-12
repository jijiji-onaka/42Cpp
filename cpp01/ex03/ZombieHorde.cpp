/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:05:51 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/13 00:15:56 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::string	names[] = {"Doraemon", "Noby", "Sue", "Sneech", "Big G", "Ace Goody"};
	std::string	types[] = {"Cat-shaped robot", "hero", "Heroine", "Mean", "Rowdy", "Smart"};

	this->N_ = N;
	try
	{
		this->zombies = new Zombie[N];
	}
	catch(std::bad_alloc e)
	{
		std::cerr << "randomChump: " << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	for (int i = 0; i < N; ++i)
	{
		this->zombies[i].set_name(names[std::rand() % 5]);
		this->zombies[i].set_type(types[std::rand() % 5]);
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->zombies;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->N_; ++i)
	{
		this->zombies[i].announce();
	}
}

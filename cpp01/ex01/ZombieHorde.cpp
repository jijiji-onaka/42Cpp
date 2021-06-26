/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:05:51 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 02:52:29 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie		*zombies;

	try
	{
		zombies = new Zombie[N];
	}
	catch(std::bad_alloc e)
	{
		std::cerr << "randomChump: " << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	for (int i = 0; i < N; ++i)
	{
		zombies[i].set_name(name);
	}
	return (zombies);
}

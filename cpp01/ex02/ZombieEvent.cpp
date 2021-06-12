/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 02:25:38 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/13 00:15:46 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*ret;

	try
	{
		ret = new Zombie(name, this->type);
	}
	catch(std::bad_alloc e)
	{
		std::cerr << "newZombie: " << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	return ret;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 01:53:57 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 02:08:18 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie		*randam_zombie;

	try
	{
		randam_zombie = new Zombie(name);
	}
	catch(std::bad_alloc e)
	{
		std::cerr << "randomChump: " << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	randam_zombie->announce();
	delete randam_zombie;
}

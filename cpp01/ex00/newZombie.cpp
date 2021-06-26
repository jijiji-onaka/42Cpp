/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 02:25:38 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 02:04:06 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*ret;

	try
	{
		ret = new Zombie(name);
	}
	catch(std::bad_alloc e)
	{
		std::cerr << "newZombie: " << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	return (ret);
}

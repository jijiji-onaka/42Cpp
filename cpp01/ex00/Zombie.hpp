/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 00:06:30 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 02:08:33 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
#include <ctime>

# define YELLOW "\033[33m"
# define RED "\033[38;5;196m"
# define GREEN "\033[38;5;34m"
# define PURPLE "\033[38;5;105m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

class Zombie {
	private:
		std::string	name_;
	public:
		Zombie(std::string name);
		~Zombie();
		void		announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif

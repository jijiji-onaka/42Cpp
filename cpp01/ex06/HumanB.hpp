/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 22:32:19 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/12 23:04:12 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
# define HUMANB_CPP

# include "Weapon.hpp"

# define YELLOW "\033[33m"
# define RED "\033[38;5;196m"
# define ORANGE "\033[38;5;202m"
# define GREEN "\033[38;5;34m"
# define PURPLE "\033[38;5;105m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

class HumanB
{
	private:
		std::string	name_;
		Weapon		*weapon_;
	public:
		HumanB(std::string name);
		void		setWeapon(Weapon &weapon);
		void		attack(void);
};

#endif

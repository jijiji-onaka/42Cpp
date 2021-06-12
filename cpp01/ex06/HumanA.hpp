/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 21:27:22 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/12 22:40:21 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

# define YELLOW "\033[33m"
# define RED "\033[38;5;196m"
# define ORANGE "\033[38;5;202m"
# define GREEN "\033[38;5;34m"
# define PURPLE "\033[38;5;105m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

class HumanA
{
	private:
		std::string	name_;
		Weapon		&weapon_;
	public:
		HumanA(std::string name, Weapon &weapon);
		void		attack(void);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 00:21:46 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:39:07 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"
# define GREEN "\033[38;5;112m"
# define GREEN_1 "\033[38;5;193m"
# define GREEN_2 "\033[38;5;184m"
# define RED "\033[38;5;203m"
# define RED_1 "\033[38;5;197m"
# define PURPLE "\033[38;5;105m"
# define PINK "\033[38;5;169m"
# define BLUE "\033[38;5;75m"
# define ORANGE "\033[38;5;210m"
# define YELLOW "\033[38;5;228m"
# define YELLOW_1 "\033[38;5;226m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

# define MAX_AP 40
# define RECOVER_AP 10

class Character
{
	private:
		Character(void);

		std::string	name_;
		int			actionPoints_;
		AWeapon		*weapon_;

	public:
		Character(std::string const & name);
		Character(Character const &other);
		Character &operator=(Character const &other);
		~Character();

		void				recoverAP();
		void				equip(AWeapon*);
		void				attack(Enemy*);
		std::string	const	&getName(void) const;
		int					getAP(void) const;
		AWeapon				*getWeapon(void) const;
};

std::ostream &operator<<(std::ostream &os, Character const &character);

#endif /* CHARACTER_HPP */

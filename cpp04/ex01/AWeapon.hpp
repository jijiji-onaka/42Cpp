/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:58:44 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:39:16 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# define GREEN "\033[38;5;112m"
# define GREEN_1 "\033[38;5;193m"
# define GREEN_2 "\033[38;5;184m"
# define RED "\033[38;5;203m"
# define RED_1 "\033[38;5;197m"
# define PURPLE "\033[38;5;105m"
# define PINK "\033[38;5;169m"
# define BLUE "\033[38;5;75m"
# define YELLOW "\033[38;5;228m"
# define YELLOW_1 "\033[38;5;226m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

class AWeapon
{
	protected:
		AWeapon(void);
		AWeapon(AWeapon const &other);
		AWeapon &operator=(AWeapon const &other);

		std::string	name_;
		int			actionPoints_;
		int			damagePoints_;

	public:
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon(void);
		std::string	const	&getName(void) const;
		int getAPCost(void) const;
		int getDamage(void) const;
		virtual void attack(void) const = 0;
};


// protected:
// 		AWeapon();
// 	public:
// 		AWeapon(std::string const & name, int apcost, int damage);
// 		AWeapon(AWeapon const &other);
// 		virtual ~AWeapon();

// 		AWeapon &operator=(AWeapon const &other);
// 		std::string const &getName() const;
// 		int getDamagePoints() const;
// 		int getAp() const;
// 		virtual void attack() const = 0;
// 	protected:
// 		std::string name;
// 		int ap;
// 		int damagePoints;

#endif /* AWEAPON_HPP */

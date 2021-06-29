/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 21:15:45 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:25:47 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"
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

//  PlasmaRifle:
// ◦ Name: "Plasma Rifle"
// ◦ Damage: 21
// ◦ AP cost: 5
// ◦ Output of attack(): "* piouuu piouuu piouuu *"

class PlasmaRifle : public AWeapon
{
	private:

	public:
		PlasmaRifle(void);
		~PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &other);
		PlasmaRifle &operator=(PlasmaRifle const &other);

		void	attack(void) const;
};

#endif /* PLASMARIFLE_HPP */

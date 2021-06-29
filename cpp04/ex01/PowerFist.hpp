/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 23:20:25 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 23:25:26 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

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
# define YELLOW "\033[38;5;228m"
# define YELLOW_1 "\033[38;5;226m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

// • PowerFist:
// ◦ Name: "Power Fist"
// ◦ Damage: 50
// ◦ AP cost: 8
// ◦ Output of attack(): "* pschhh... SBAM! *"

class PowerFist : public AWeapon
{
	private:

	public:
		PowerFist(void);
		~PowerFist(void);
		PowerFist(PowerFist const &other);
		PowerFist &operator=(PowerFist const &other);

		void	attack(void) const;
};

#endif /* POWERFIST_HPP */

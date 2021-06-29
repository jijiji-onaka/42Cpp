/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AirCannon.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 02:57:02 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:06:32 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AIRCANNON_HPP
# define AIRCANNON_HPP

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

# define AC_AP_COST 20
# define AC_AP_DAMAGE 1000

class AirCannon : public AWeapon
{
	private:

	public:
		AirCannon(void);
		~AirCannon(void);
		AirCannon(AirCannon const &other);
		AirCannon &operator=(AirCannon const &other);

		void	attack(void) const;
};

#endif /* AIRCANNON_HPP */

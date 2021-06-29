/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 00:00:05 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 00:03:58 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"
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

// ◦ HP: 80
// ◦ Type: "RadScorpion"
// ◦ On birth, displays: "* click click click *"
// ◦ Upon death, displays: "* SPROTCH *"

class RadScorpion : public Enemy
{
	private:

	public:
		RadScorpion(void);
		~RadScorpion(void);
		RadScorpion(RadScorpion const &other);
		RadScorpion &operator=(RadScorpion const &other);
};

#endif /* RADSCORPION_HPP */

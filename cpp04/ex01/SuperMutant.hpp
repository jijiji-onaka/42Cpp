/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 23:49:52 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 00:03:24 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

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

// • HP: 170
// • Type: "Super Mutant"
// • On birth, displays: "Gaaah. Me want smash heads!"
// • Upon death, displays: "Aaargh..."
// • Overloads takeDamage to take 3 less damage points than normal (Yeah, they’re kinda strong, these guys.)

class SuperMutant : public Enemy
{
	private:

	public:
		SuperMutant(void);
		~SuperMutant(void);
		SuperMutant(SuperMutant const &other);
		SuperMutant &operator=(SuperMutant const &other);

		void	takeDamage(int);
};

#endif /* SUPERMUTANT_HPP */

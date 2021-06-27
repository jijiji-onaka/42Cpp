/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 08:47:15 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 20:39:11 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>
# define GREEN "\033[38;5;112m"
# define RED "\033[38;5;203m"
# define PURPLE "\033[38;5;105m"
# define PINK "\033[38;5;169m"
# define BLUE "\033[38;5;75m"
# define YELLOW "\033[38;5;228m"
# define GREEN_1 "\033[38;5;193m"
# define GREEN_2 "\033[38;5;184m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

class ClapTrap
{
	protected:
		std::string		Name_;
		unsigned int	Hitpoints_;
		unsigned int	points_;
		unsigned int	damege_;

	public:
		ClapTrap(void);
		ClapTrap(std::string Name);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &other);
		ClapTrap &operator=(ClapTrap const &other);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif /* CLAPTRAP_HPP */

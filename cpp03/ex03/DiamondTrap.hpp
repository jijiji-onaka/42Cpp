/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 21:43:22 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 22:36:38 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

// • Name (Parameter of constructor)
// • Claptrap::Name (Parameter of constructor + "_clap_name")
// • Hitpoints (Fragtrap)
// • Energy points (Scavtrap)
// • Attack damage (Fragtrap)
// • attack (Scavtrap)

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string		Name_;
		ClapTrap		CT_Name_;
		unsigned int	Hitpoints_;
		unsigned int	points_;
		unsigned int	damege_;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string Name);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const &other);
		DiamondTrap &operator=(DiamondTrap const &other);

		void	attack(std::string const &target);
		void	whoAmI(void);
};

#endif /* DIAMONDTRAP_HPP */

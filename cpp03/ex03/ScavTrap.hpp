/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:14:09 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 18:21:36 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	private:

	public:
		ScavTrap(void);
		ScavTrap(std::string Name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &other);
		ScavTrap &operator=(ScavTrap const &other);

		void	guardGate(void);
};

#endif /* SCAVTRAP_HPP */

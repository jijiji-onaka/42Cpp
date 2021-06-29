/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 07:09:14 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 09:11:35 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"
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

# define XP_UP 10

class	ICharacter;

class AMateria
{
	protected:
		AMateria(void);

		std::string		type_;
		unsigned int	_xp;

	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &other);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &other);

		std::string const &getType() const; //Returns the materia type
		unsigned int getXP() const;			//Returns the Materia's XP
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif /* AMATERIA_HPP */

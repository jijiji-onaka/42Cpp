/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 07:33:40 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 10:11:26 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# define GREEN "\033[38;5;112m"
# define GREEN_1 "\033[38;5;193m"
# define GREEN_2 "\033[38;5;184m"
# define GREEN_3 "\033[38;5;2m"
# define RED "\033[38;5;203m"
# define RED_1 "\033[38;5;197m"
# define PURPLE "\033[38;5;105m"
# define PINK "\033[38;5;169m"
# define BLUE "\033[38;5;75m"
# define ORANGE "\033[38;5;202m"
# define YELLOW "\033[38;5;228m"
# define YELLOW_1 "\033[38;5;226m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

# define MATERIA_MAX 4

class Character : public ICharacter
{
	private:
		Character(void);

		std::string	name_;
		AMateria	*Materia_[MATERIA_MAX];
		int			MateriaNum_;

	public:
		Character(std::string name);
		~Character(void);
		Character(Character const &other);
		Character &operator=(Character const &other);

		std::string const	&getName() const;

		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		void				putStatus(int idx);
};

#endif /* CHARACTER_HPP */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 07:55:00 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 10:11:26 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# define GREEN "\033[38;5;112m"
# define GREEN_1 "\033[38;5;193m"
# define GREEN_2 "\033[38;5;184m"
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

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*Materia_[MATERIA_MAX];
		int			MateriaNum_;
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const &other);
		MateriaSource &operator=(MateriaSource const &other);

		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &type);
};

#endif /* MATERIASOURCE_HPP */

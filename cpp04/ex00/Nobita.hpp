/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nobita.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:38:33 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 20:40:01 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOBITA_HPP
# define NOBITA_HPP

# include <iostream>
# include "Victim.hpp"
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

class Nobita : public Victim
{
	private:
		Nobita(void);

	public:
		Nobita(std::string name);
		~Nobita(void);
		Nobita(Nobita const &other);
		Nobita &operator=(Nobita const &other);

		void	getPolymorphed(void) const;
};

#endif /* NOBITA_HPP */

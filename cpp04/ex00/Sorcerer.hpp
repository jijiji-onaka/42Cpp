/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:36:24 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 19:48:16 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"
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

class Sorcerer
{
	private:
		Sorcerer(void);

		std::string	name_;
		std::string	title_;
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer(Sorcerer const &other);
		Sorcerer &operator=(Sorcerer const &other);

		std::string	get_name(void) const;
		std::string	get_title(void) const;

		void	polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &sorcerer);

#endif /* SORCERER_HPP */

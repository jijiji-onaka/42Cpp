/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:29:15 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/28 20:23:27 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
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

class Victim
{
	protected:
		Victim(void);

		std::string name_;

	public:
		Victim(std::string name);
		~Victim(void);
		Victim(Victim const &other);
		Victim &operator=(Victim const &other);

		std::string	get_name(void) const;

		virtual void	getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &os, Victim const &victim);

#endif /* VICTIM_HPP */

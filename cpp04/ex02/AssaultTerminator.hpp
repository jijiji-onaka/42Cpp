/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 04:28:13 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 04:30:28 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"
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

// • Birth: "* teleports from space *"
// • battleCry() : "This code is unclean. PURIFY IT!"
// • rangedAttack : "* does nothing *"
// • meleeAttack : "* attacks with chainfists *"
// • Death: "I’ll be back..."

class AssaultTerminator : public ISpaceMarine
{
	private:

	public:
		AssaultTerminator(void);
		~AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &other);
		AssaultTerminator &operator=(AssaultTerminator const &other);

		ISpaceMarine	*clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif /* ASSAULTTERMINATOR_HPP */

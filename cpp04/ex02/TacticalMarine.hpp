/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 04:13:51 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 04:17:58 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

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

// • clone() returns a copy of the current object
// • Upon creation, displays: "Tactical Marine ready for battle!"
// • battleCry() displays: "For the holy PLOT!"
// • rangedAttack() displays: "* attacks with a bolter *"
// • meleeAttack() displays: "* attacks with a chainsword *"
// • Upon death, displays: "Aaargh..."

class TacticalMarine: public ISpaceMarine
{
	private:

	public:
		TacticalMarine(void);
		~TacticalMarine(void);
		TacticalMarine(TacticalMarine const &other);
		TacticalMarine &operator=(TacticalMarine const &other);

		ISpaceMarine	*clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif /* TACTICALMARINE_HPP */

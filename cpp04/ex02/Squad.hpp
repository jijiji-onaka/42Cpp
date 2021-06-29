/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 04:35:47 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 06:23:06 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"
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

typedef struct	s_ISpaceMarine
{
	ISpaceMarine			*unit;
	struct s_ISpaceMarine	*next;
}				t_ISpaceMarine;

class Squad : public ISquad
{
	private:
		t_ISpaceMarine	*unitList_;
		int				unitsNum_;

	public:
		Squad(void);
		~Squad(void);
		Squad(const Squad &other);
		Squad &operator=(Squad const &other);

		int				getCount() const;
		ISpaceMarine	*getUnit(int) const;
		int				push(ISpaceMarine *);
		t_ISpaceMarine	*MakeListNew(ISpaceMarine *unit) const;
};

#endif /* SQUAD_HPP */

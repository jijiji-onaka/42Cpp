/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 04:07:12 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 06:41:44 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include <iostream>
# include "ISpaceMarine.hpp"
# define GREEN "\033[38;5;112m"
# define GREEN_1 "\033[38;5;193m"
# define GREEN_2 "\033[38;5;184m"
# define GREEN_3 "\033[38;5;2m"
# define RED "\033[38;5;203m"
# define RED_1 "\033[38;5;197m"
# define RED_2 "\033[38;5;9m"
# define PURPLE "\033[38;5;105m"
# define PINK "\033[38;5;169m"
# define BLUE "\033[38;5;75m"
# define YELLOW "\033[38;5;228m"
# define YELLOW_1 "\033[38;5;226m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

class ISquad
{
	public:
		virtual	~ISquad() {}
		virtual int	getCount() const = 0;
		virtual ISpaceMarine	*getUnit(int) const = 0;
		virtual int	push(ISpaceMarine *) = 0;
};

#endif /* ISQUAD_HPP */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gian.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 03:08:06 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:15:16 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GIAN_HPP
# define GIAN_HPP

# include <iostream>
# include "Enemy.hpp"
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

# define GIAN_HP 190

class Gian : public Enemy
{
	private:

	public:
		Gian(void);
		~Gian(void);
		Gian(Gian const &other);
		Gian &operator=(Gian const &other);

		void	takeDamage(int);
};

#endif /* GIAN_HPP */

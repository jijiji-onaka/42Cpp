/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 23:27:00 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:40:38 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

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

class Enemy
{
	protected:
		Enemy(void);
		Enemy(Enemy const &other);
		Enemy &operator=(Enemy const &other);

		int			hitPoints_;
		std::string	type_;

	public:
		Enemy(int hp, std::string const &type);
		virtual ~Enemy(void);
		std::string const	&getType() const;
		int getHP() const;

		virtual void takeDamage(int);
};

#endif /* ENEMY_HPP */

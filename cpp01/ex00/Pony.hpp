/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 20:26:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/10 21:14:58 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# define YELLOW "\033[33m"
# define RED "\033[38;5;196m"
# define GREEN "\033[38;5;49m"
# define PURPLE "\033[38;5;105m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

class Pony {
	private:
		std::string	Horse_whinny;
		int			weight;
	public:
		Pony(std::string arg, int weight);
		void	whinny(void);
};

#endif

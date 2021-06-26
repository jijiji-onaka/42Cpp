/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 14:21:01 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/13 16:05:02 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <unistd.h>
# include <stdbool.h>
# define GREEN "\033[38;5;112m"
# define RED "\033[38;5;196m"
# define ORANGE "\033[38;5;203m"
# define PURPLE "\033[38;5;105m"
# define PINK "\033[38;5;169m"
# define BLUE "\033[38;5;75m"
# define YELLOW "\033[38;5;228m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

class Fixed
{
	private:
		int			number_;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed	&operator=(const Fixed &assign);
		int		getRawBits(void) const;

};

#endif

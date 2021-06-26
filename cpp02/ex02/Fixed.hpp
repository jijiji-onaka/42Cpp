/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 14:21:01 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/13 18:24:29 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <unistd.h>
# include <stdbool.h>
# include <cmath>
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

class Fixed
{
	private:
		int					number_;
		static const int	bits = 8;

	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed	&operator=(const Fixed &assign);
		bool	operator==(Fixed const &fixed) const;
		bool	operator!=(Fixed const &fixed) const;
		bool	operator<=(Fixed const &fixed) const;
		bool	operator>=(Fixed const &fixed) const;
		bool	operator<(Fixed const &fixed) const;
		bool	operator>(Fixed const &fixed) const;

		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif

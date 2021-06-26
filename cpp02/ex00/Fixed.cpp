/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 14:20:58 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 06:28:53 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : number_(0)
{
	if (isatty(STDOUT_FILENO) == false)
		std::cout << "Default constructor called" << std::endl;
	else
		std::cout << GREEN""BOLD"Default constructor called"RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	if (isatty(STDOUT_FILENO) == false)
		std::cout << "Copy constructor called" << std::endl;
	else
		std::cout << ORANGE""BOLD"Copy constructor called"RESET << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	if (isatty(STDOUT_FILENO) == false)
		std::cout << "Destructor called" << std::endl;
	else
		std::cout << PINK""BOLD"Destructor called"RESET << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &assign)
{
	if (isatty(STDOUT_FILENO) == false)
		std::cout << "Assignation operator called" << std::endl;
	else
		std::cout << BLUE""BOLD"Assignation operator called"RESET << std::endl;
	this->number_ = assign.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	if (isatty(STDOUT_FILENO) == false)
		std::cout << "getRawBits member function called" << std::endl;
	else
		std::cout << YELLOW""BOLD"getRawBits member function called"RESET << std::endl;
	return (this->number_);
}

void	Fixed::setRawBits(int const raw)
{
	this->number_ = raw;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:06:19 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 06:27:04 by tjinichi         ###   ########.fr       */
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

Fixed::Fixed(const int number)
{
	if (isatty(STDOUT_FILENO) == false)
		std::cout << "Int constructor called" << std::endl;
	else
		std::cout << GREEN_1""BOLD"Int constructor called"RESET << std::endl;
	this->number_ = (int)number * (1 << 8);
}

Fixed::Fixed(const float number)
{
	if (isatty(STDOUT_FILENO) == false)
		std::cout << "Float constructor called" << std::endl;
	else
		std::cout << GREEN_2""BOLD"Float constructor called"RESET << std::endl;
	this->number_ = (int)roundf(number * (1 << 8));
}

Fixed::Fixed(const Fixed &copy)
{
	if (isatty(STDOUT_FILENO) == false)
		std::cout << "Copy constructor called" << std::endl;
	else
		std::cout << RED""BOLD"Copy constructor called"RESET << std::endl;
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
	this->number_ = assign.number_;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
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

int	Fixed::toInt(void) const
{
	return (this->number_ / (1 << 8));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->number_ / (1 << 8));
}

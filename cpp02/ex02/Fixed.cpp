/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:06:19 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 07:16:44 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : number_(0)
{
}

Fixed::Fixed(const int number)
{
	this->number_ = (int)number * (1 << this->bits);
}

Fixed::Fixed(const float number)
{
	this->number_ = (int)roundf(number * (1 << this->bits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(const Fixed &assign)
{
	this->number_ = assign.number_;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool	Fixed::operator==(Fixed const &fixed) const
{
	return (this->number_ == fixed.number_);
}

bool	Fixed::operator!=(Fixed const &fixed) const
{
	return (!(*this == fixed));
}

bool	Fixed::operator<=(Fixed const &fixed) const
{
	return (this->number_ <= fixed.number_);
}

bool	Fixed::operator>=(Fixed const &fixed) const
{
	return (this->number_ >= fixed.number_);
}

bool	Fixed::operator<(Fixed const &fixed) const
{
	return (this->number_ < fixed.number_);
}

bool	Fixed::operator>(Fixed const &fixed) const
{
	return (this->number_ > fixed.number_);
}

Fixed	Fixed::operator+(Fixed const &fixed) const
{
	Fixed	res;

	res.setRawBits(this->number_ + fixed.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(Fixed const &fixed) const
{
	Fixed	res;

	res.setRawBits(this->number_ - fixed.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(Fixed const &fixed) const
{
	Fixed	res;

	res.setRawBits((this->number_ * fixed.getRawBits()) >> this->bits);
	return (res);
}

Fixed	Fixed::operator/(Fixed const &fixed) const
{
	Fixed	res;

	res.setRawBits((this->number_ << this->bits) / fixed.getRawBits());
	return (res);
}

Fixed	Fixed::operator++()
{
	++(this->number_);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed res(*this);

	++(*this);
	return (res);
}

Fixed	Fixed::operator--()
{
	--(this->number_);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed res(*this);

	--(*this);
	return (res);
}

int	Fixed::getRawBits(void) const
{
	return (this->number_);
}

void	Fixed::setRawBits(int const raw)
{
	this->number_ = raw;
}

int	Fixed::toInt(void) const
{
	return (this->number_ / (1 << this->bits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->number_ / (1 << this->bits));
}

Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

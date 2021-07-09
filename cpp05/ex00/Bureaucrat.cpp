/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:48:01 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/30 13:37:34 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name_(name), grade_(grade)
{
	if (this->grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade_ > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
	{
		this->grade_ = other.grade_;
	}
	return (*this);
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->name_);
}

int	Bureaucrat::getGrade(void)	const
{
	return (this->grade_);
}

void	Bureaucrat::IncrementGrade(void)
{
	if (this->grade_ == HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	this->grade_ -= 1;
}

void	Bureaucrat::DecrementGrade(void)
{
	if (this->grade_ == LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->grade_ += 1;
}

// The grade is out of the higher limit.
const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return (RED""BOLD"Error:"RESET""BOLD" The grade is out of the higher limit."RESET);
}

// The grade is out of the lower limit.
const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return (RED""BOLD"Error:"RESET""BOLD" The grade is out of the lower limit."RESET);
}

// <name>, bureaucrat grade <grade>.
std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	std::cerr << GREEN""BOLD;
	os << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">.";
	std::cerr << RESET;
	return (os);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:08:46 by tjinichi          #+#    #+#             */
/*   Updated: 2021/07/10 06:14:35 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade) : name_(name), isSigned_(false),
					signGrade_(signGrade), execGrade_(execGrade)
{
	if (this->signGrade_ < HIGHEST_GRADE || this->execGrade_ < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	else if (this->signGrade_ > LOWEST_GRADE || this->execGrade_ > LOWEST_GRADE)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{
}

Form::Form(Form const &other) : name_(other.name_), isSigned_(false),
					signGrade_(other.signGrade_), execGrade_(other.execGrade_)
{
}

Form &Form::operator=(Form const &other)
{
	if (this != &other)
	{
		this->isSigned_ = other.isSigned_;
	}
	return (*this);
}

std::string	const	Form::getName(void) const
{
	return (this->name_);
}

int	Form::getSignGrade(void) const
{
	return (this->signGrade_);
}

int	Form::getExecGrade(void) const
{
	return (this->execGrade_);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->isSigned_ == true)
		throw Form::AlreadySignedExecption();
	if (bureaucrat.getGrade() > this->signGrade_)
		throw Form::GradeTooLowException();
	this->isSigned_ = true;
}

int	Form::getIsSigned(void) const
{
	return (this->isSigned_);
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (this->isSigned_ == false)
		throw Form::NotYetSigned();
	if (executor.getGrade() > this->execGrade_)
		throw Form::GradeTooLowException();
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return (RED""BOLD"(ERROR) The grade is too high."RESET);
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return (RED""BOLD"(ERROR) The grade is too low."RESET);
}

const char	*Form::AlreadySignedExecption::what(void) const throw()
{
	return (RED""BOLD"(ERROR) It's already signed."RESET);
}

const char	*Form::NotYetSigned::what(void) const throw()
{
	return (RED""BOLD"(ERROR) It's not signed yet."RESET);
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "Form                         :" << form.getName() << '\n' \
		<< "Sign                        : " << (form.getIsSigned() ? N_GREEN"O" : N_RED"X") << RESET << '\n' \
		<< "Grade required for signature: " << form.getSignGrade() << '\n' \
		<< "Grade required for execution: " << form.getExecGrade();
	return (os);
}

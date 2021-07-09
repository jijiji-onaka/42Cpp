/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 06:54:53 by tjinichi          #+#    #+#             */
/*   Updated: 2021/07/10 07:11:55 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern &Intern::operator=(Intern const &other)
{
	if (this != &other)
	{
	}
	return (*this);
}

Form *Intern::makeShrubbery(const std::string &target)
{
	ShrubberyCreationForm	*res;

	try
	{
		res = new ShrubberyCreationForm(target);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::exit(EXIT_FAILURE);
	}
	return (res);
}

Form *Intern::makeRobotomy(const std::string &target)
{
	RobotomyRequestForm	*res;

	try
	{
		res = new RobotomyRequestForm(target);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::exit(EXIT_FAILURE);
	}
	return (res);
}

Form *Intern::makePresidential(const std::string &target)
{
	PresidentialPardonForm	*res;

	try
	{
		res = new PresidentialPardonForm(target);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::exit(EXIT_FAILURE);
	}
	return (res);
}

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
	std::string names[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	Form* (Intern::*func[])(const std::string &) = {
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresidential
	};
	for (int i = 0; i < 3; ++i)
	{
		if (names[i] == name)
			return ((this->*(func[i]))(target));
	}
	throw NotMatchFormName();
}

const char	*Intern::NotMatchFormName::what(void) const throw()
{
	return (RED""BOLD"(ERROR) FormName is wrong."RESET);
}

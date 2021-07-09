/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:03:50 by tjinichi          #+#    #+#             */
/*   Updated: 2021/07/10 06:35:08 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
		: Form(target, SHRUBBERY_SIGN_GRADE, SHRUBBERY_EXEC_GRADE), target_(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
	{
		;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);

	std::string	buf = "(pwd; find . | sort) > " + this->target_ + "_shrubbery";
	const char	*exectree = buf.c_str();
	if (std::system(exectree))
	{
		std::cout << RED""BOLD"Error: "RESET"system function\n";
		std::exit(EXIT_FAILURE);
	}
}

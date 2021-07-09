/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 04:48:11 by tjinichi          #+#    #+#             */
/*   Updated: 2021/07/10 06:18:04 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
		: Form(target, ROBOTOMY_SIGN_GRADE, ROBOTOMY_EXEC_GRADE), target_(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
	{
	}
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);

	if (std::rand() % 2)
	{
		std::cout << GREEN"Grrrrrrrr Grrrrrrr" \
		<< std::endl << this->target_ << " has been robotomized successfully ."RESET << std::endl;
	}
	else
	{
		std::cout << YELLOW"Grrrrrrrr Grrrrrrr" \
		<< std::endl << this->target_ << " failed to lobotomize."RESET << std::endl;
	}
}

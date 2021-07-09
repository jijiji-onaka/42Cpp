/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:09:02 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/30 14:59:23 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void	PutTitle(std::string title)
{
	std::cout << YELLOW_1""BOLD"* * * " << title << " * * *"RESET << std::endl;
}

static void	PutTestCase(std::string name, int grade)
{
	std::cout << BLUE""BOLD"TestCase: Bureaucrat	bureaucrat(" << name << ", " << grade << ");"RESET << std::endl;
}

static void	TestCase(std::string title, std::string name, int grade, unsigned int func)
{
	PutTitle(title);
	PutTestCase(name, grade);
	try
	{
		Bureaucrat	bureaucrat(name, grade);

		std::cout << bureaucrat << std::endl;
		if (func == INCREMENT_FUNC)
			bureaucrat.IncrementGrade();
		else if (func == DECREMENT_FUNC)
			bureaucrat.DecrementGrade();
		else
			return ;
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	TestCase("IncrementGrade", "Dora", 10, DECREMENT_FUNC);
	puts("");

	TestCase("DecrementGrade", "Shizu", 3, INCREMENT_FUNC);
	puts("");

	TestCase("GradeTooHighException Test[1]", "Dekisugi", 0, INCREMENT_FUNC);
	puts("");
	TestCase("GradeTooHighException Test[2]", "Dekisugi", -1, INCREMENT_FUNC);
	puts("");
	TestCase("GradeTooHighException Test[3]", "Dekisugi", INT_MIN, INCREMENT_FUNC);
	puts("");
	TestCase("GradeTooHighException Test[4] After Increment", "Dekisugi", 1, INCREMENT_FUNC);
	puts("");

	TestCase("GradeTooLowException Test[1]", "Nobi", 151, DECREMENT_FUNC);
	puts("");
	TestCase("GradeTooLowException Test[2]", "Nobi", INT_MAX, DECREMENT_FUNC);
	puts("");
	TestCase("GradeTooLowException Test[3] After Decrement", "Nobi", 150, DECREMENT_FUNC);
}

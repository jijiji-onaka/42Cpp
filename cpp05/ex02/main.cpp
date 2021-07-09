/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:09:02 by tjinichi          #+#    #+#             */
/*   Updated: 2021/07/10 06:40:29 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define SHRUBBERY 0
#define ROBOTOMY 1
#define PRESIDENTIAL 2

static void	PutTitle(std::string title)
{
	std::cout << YELLOW_1""BOLD"* * * " << title << " * * *"RESET << std::endl;
}

static void	PutTestCase(std::string name, int what_form)
{
	if (what_form == SHRUBBERY)
		std::cout << BLUE_1""BOLD"TestCase: ShrubberyCreationFor	form(\"" << name << "\")" << RESET << std::endl;
	else if (what_form == ROBOTOMY)
		std::cout << BLUE_1""BOLD"TestCase: RobotomyRequestForm	form(\"" << name << "\")" << RESET << std::endl;
	else
		std::cout << BLUE_1""BOLD"TestCase: PresidentialPardonForm	form(\"" << name << "\")" << RESET << std::endl;
}

static void TestCase_Shrubbery(std::string title, std::string name, Bureaucrat *person)
{
	PutTitle(title);
	PutTestCase(name, SHRUBBERY);

	ShrubberyCreationForm form(name);

	puts(BOLD"[Not Yet Signed]"RESET);
	try
	{
		person->executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	puts(BOLD"[Sign And Exec]"RESET);
	try
	{
		if (person == NULL)
			return ;
		person->signForm(form);
		person->executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void TestCase_Robotomy(std::string title, std::string name, Bureaucrat *person)
{
	PutTitle(title);
	PutTestCase(name, ROBOTOMY);

	RobotomyRequestForm form(name);

	puts(BOLD"[Not Yet Signed]"RESET);
	try
	{
		person->executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	puts(BOLD"[Sign And Exec]"RESET);
	try
	{
		if (person == NULL)
			return ;
		person->signForm(form);
		person->executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void TestCase_Presidential(std::string title, std::string name, Bureaucrat *person)
{
	PutTitle(title);
	PutTestCase(name, PRESIDENTIAL);

	PresidentialPardonForm form(name);

	puts(BOLD"[Not Yet Signed]"RESET);
	try
	{
		person->executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	puts(BOLD"[Sign And Exec]"RESET);
	try
	{
		if (person == NULL)
			return ;
		person->signForm(form);
		person->executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static Bureaucrat	*MakeBureaucrat(std::string name, int grade)
{
	PutTitle("Make Bureaucrat");

	Bureaucrat	*bureaucrat;
	try
	{
		bureaucrat = new Bureaucrat(name, grade);

		std::cout << *bureaucrat << std::endl;
		return (bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
}

int	main(void)
{
	Bureaucrat	*nobi, *dekisugi;
	nobi = MakeBureaucrat("Nobi", 140);
	dekisugi = MakeBureaucrat("Dekisugi", 1);
	puts("");


	TestCase_Shrubbery("Shrubbery Fail Exec", "FailForm", nobi);
	puts("");
	TestCase_Shrubbery("Shrubbery Success Exec", "SuccessForm", dekisugi);
	puts("");

	TestCase_Robotomy("Robotomy Fail Exec", "FailForm", nobi);
	puts("");
	TestCase_Robotomy("Robotomy Success Exec", "SuccessForm", dekisugi);
	puts("");

	TestCase_Presidential("TestCase_Presidential Fail Exec", "FailForm", nobi);
	puts("");
	TestCase_Presidential("TestCase_Presidential Success Exec", "SuccessForm", dekisugi);
	puts("");


	(void)TestCase_Robotomy;
	(void)TestCase_Presidential;
	delete dekisugi;
	delete nobi;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:09:02 by tjinichi          #+#    #+#             */
/*   Updated: 2021/07/10 07:25:36 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define SHRUBBERY 0
#define ROBOTOMY 1
#define PRESIDENTIAL 2

void	PutTitle(std::string title)
{
	std::cout << YELLOW_1""BOLD"* * * " << title << " * * *"RESET << std::endl;
}

void	PutTestCase(std::string name, int what_form)
{
	if (what_form == SHRUBBERY)
		std::cout << BLUE_1""BOLD"TestCase: ShrubberyCreationFor	form(\"" << name << "\")" << RESET << std::endl;
	else if (what_form == ROBOTOMY)
		std::cout << BLUE_1""BOLD"TestCase: RobotomyRequestForm	form(\"" << name << "\")" << RESET << std::endl;
	else
		std::cout << BLUE_1""BOLD"TestCase: PresidentialPardonForm	form(\"" << name << "\")" << RESET << std::endl;
}

void TestCase_Shrubbery(std::string title, std::string name, Bureaucrat *person, Form *form)
{
	PutTitle(title);
	PutTestCase(name, SHRUBBERY);

	puts(BOLD"[Not Yet Signed]"RESET);
	try
	{
		person->executeForm(*form);
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
		person->signForm(*form);
		person->executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void TestCase_Robotomy(std::string title, std::string name, Bureaucrat *person, Form *form)
{
	PutTitle(title);
	PutTestCase(name, ROBOTOMY);

	puts(BOLD"[Not Yet Signed]"RESET);
	try
	{
		person->executeForm(*form);
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
		person->signForm(*form);
		person->executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void TestCase_Presidential(std::string title, std::string name, Bureaucrat *person, Form *form)
{
	PutTitle(title);
	PutTestCase(name, PRESIDENTIAL);

	puts(BOLD"[Not Yet Signed]"RESET);
	try
	{
		person->executeForm(*form);
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
		person->signForm(*form);
		person->executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat	*MakeBureaucrat(std::string name, int grade)
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

Form	*MakeEachForm(std::string title, std::string name, std::string target)
{
	PutTitle(title);

	Intern someRandomIntern;
	Form* rrf;
	try
	{
		rrf = someRandomIntern.makeForm(name, target);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (NULL);
	}
	return (rrf);
}

int	main(void)
{
	Bureaucrat	*nobi, *dekisugi;
	nobi = MakeBureaucrat("Nobi", 140);
	dekisugi = MakeBureaucrat("Dekisugi", 1);
	puts("");

	Form	*form_shr;
	Form	*form_rob;
	Form	*form_pre;
	Form	*form_miss;

	form_shr = MakeEachForm("Make ShrubberyForm", "shrubbery creation", "sh_SuccessForm");
	puts("");
	form_rob = MakeEachForm("Make RobotomyForm", "robotomy request", "ro_SuccessForm");
	puts("");
	form_pre = MakeEachForm("Make PresidentialForm", "presidential pardon", "pr_SuccessForm");
	puts("");
	form_miss = MakeEachForm("Not Exist Form", "miss", "FailForm");
	puts("");

	TestCase_Shrubbery("Shrubbery Fail Exec", "FailForm", nobi, form_shr);
	puts("");
	puts("");
	TestCase_Shrubbery("Shrubbery Success Exec", "SuccessForm", dekisugi, form_shr);
	puts("");

	TestCase_Robotomy("Robotomy Fail Exec", "FailForm", nobi, form_rob);
	puts("");
	TestCase_Robotomy("Robotomy Success Exec", "SuccessForm", dekisugi, form_rob);
	puts("");

	TestCase_Presidential("TestCase_Presidential Fail Exec", "FailForm", nobi, form_pre);
	puts("");
	TestCase_Presidential("TestCase_Presidential Success Exec", "SuccessForm", dekisugi, form_pre);
	puts("");


	delete dekisugi;
	delete nobi;
	delete form_shr;
	delete form_rob;
	delete form_pre;
}

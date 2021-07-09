/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:09:02 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/30 15:46:35 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

static void	PutTitle(std::string title)
{
	std::cout << YELLOW_1""BOLD"* * * " << title << " * * *"RESET << std::endl;
}

static void	PutTestCase(std::string name, int signGrade, int execGrade)
{
	std::cout << BLUE_1""BOLD"TestCase: Form	form(" << name << ", " << signGrade << ", " << execGrade << ");"RESET << std::endl;
}

// static void TestCase(std::string title, std::string name, int signGrade, \
// 			int execGrade, Bureaucrat *signer, bool is_dup)
// {
// 	PutTitle(title);
// 	PutTestCase(name, signGrade, execGrade);

// 	try
// 	{
// 		Form	form(name, signGrade, execGrade);
// 		std::cout << BOLD"[Before Form]\n"RESET << form << std::endl;
// 		if (signer == NULL)
// 			return ;
// 		form.beSigned(*signer);
// 		std::cout << BOLD"\n[After Form]\n"RESET << form << std::endl;
// 		if (is_dup == true)
// 		{
// 			std::cout << BOLD"\n[Try to Sign Already Signed Form]\n"RESET;
// 			form.beSigned(*signer);
// 			std::cout << form << std::endl;
// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }

static void TestCase(std::string title, std::string name, int signGrade, \
			int execGrade, Bureaucrat *signer, bool is_dup)
{
	PutTitle(title);
	PutTestCase(name, signGrade, execGrade);

	try
	{
		Form	form(name, signGrade, execGrade);
		if (signer == NULL)
			return ;
		std::cout << *signer << std::endl;
		std::cout << BOLD"[Before Form]\n"RESET << form << std::endl;
		NEWLINE;
		if (signer->signForm(form) == false)
			return ;
		NEWLINE;
		std::cout << BOLD"[After Form]\n"RESET << form << std::endl;
		if (is_dup == true)
		{
			std::cout << BOLD"\n[Try to Sign Already Signed Form]"RESET;
			NEWLINE;
			if (signer->signForm(form) == false)
				return ;
			NEWLINE;
			std::cout << form << std::endl;
		}
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
	nobi = MakeBureaucrat("Nobi", 150);
	dekisugi = MakeBureaucrat("Dekisugi", 1);
	puts("");

	TestCase("Fail to make Form (SignGrade Lower Fail)", "", 0, 5, NULL, false);
	puts("");
	TestCase("Fail to make Form (ExecGrade Lower Fail)", "", 5, 0, NULL, false);
	puts("");
	TestCase("Fail to make Form (SignGrade and ExecGrade Lower Fail)", "", 0, 0, NULL, false);
	puts("");
	TestCase("Fail to make Form (SignGrade Higher Fail)", "", 1000, 5, NULL, false);
	puts("");
	TestCase("Fail to make Form (ExecGrade Higher Fail)", "", 5, 1000, NULL, false);
	puts("");
	TestCase("Fail to make Form (SignGrade and ExecGrade Higher Fail)", "", 1000, 1000, NULL, false);
	puts("");


	TestCase("Make Normal Form and Success Sign", "ToSuccessSign", 10, 10, dekisugi, false);
	puts("");

	TestCase("Try to Sign Already Signed Form", "AlreadySign", 10, 10, dekisugi, true);
	puts("");

	TestCase("Make Normal Form and Fail Sign", "ToFailSign", 10, 10, nobi, false);

	delete dekisugi;
	delete nobi;
}

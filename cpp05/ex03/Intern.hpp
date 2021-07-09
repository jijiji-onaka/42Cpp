/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 06:54:56 by tjinichi          #+#    #+#             */
/*   Updated: 2021/07/10 07:08:31 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <climits>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# define N_GREEN "\033[38;5;10m"
# define N_RED "\033[38;5;9m"
# define GREEN "\033[38;5;112m"
# define GREEN_1 "\033[38;5;193m"
# define GREEN_2 "\033[38;5;184m"
# define GREEN_3 "\033[38;5;2m"
# define RED "\033[38;5;203m"
# define RED_1 "\033[38;5;197m"
# define RED_2 "\033[38;5;217m"
# define PURPLE "\033[38;5;105m"
# define PINK "\033[38;5;169m"
# define BLUE "\033[38;5;75m"
# define BLUE_1 "\033[38;5;45m"
# define ORANGE "\033[38;5;202m"
# define YELLOW "\033[38;5;228m"
# define YELLOW_1 "\033[38;5;226m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

# define NEWLINE std::cout << '\n'

class Intern
{
	private:

	public:
		Intern(void);
		~Intern(void);
		Intern(Intern const &other);
		Intern &operator=(Intern const &other);

		class NotMatchFormName : public std::exception {
			virtual const char *what(void) const throw();
		};

		Form *makeForm(const std::string &name, const std::string &target);
		Form *makeShrubbery(const std::string &target);
		Form *makeRobotomy(const std::string &target);
		Form *makePresidential(const std::string &target);
};

#endif /* INTERN_HPP */

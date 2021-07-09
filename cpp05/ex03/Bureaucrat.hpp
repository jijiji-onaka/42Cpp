/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:48:03 by tjinichi          #+#    #+#             */
/*   Updated: 2021/07/10 06:06:10 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <climits>
# include "Form.hpp"
# define GREEN "\033[38;5;112m"
# define GREEN_1 "\033[38;5;193m"
# define GREEN_2 "\033[38;5;184m"
# define GREEN_3 "\033[38;5;2m"
# define GREEN_4 "\033[38;5;22m"
# define RED "\033[38;5;203m"
# define RED_1 "\033[38;5;197m"
# define PURPLE "\033[38;5;105m"
# define PINK "\033[38;5;169m"
# define BLUE "\033[38;5;75m"
# define ORANGE "\033[38;5;202m"
# define YELLOW "\033[38;5;228m"
# define YELLOW_1 "\033[38;5;226m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150
# define INCREMENT_FUNC 0
# define DECREMENT_FUNC 1
# define NO_FUNC 2

class Form;

class Bureaucrat
{
	private:
		Bureaucrat(void);
		Bureaucrat &operator=(Bureaucrat const &other);

		std::string const	name_;
		int 				grade_;

	public:
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat(void);
		Bureaucrat(Bureaucrat const &other);

		class GradeTooHighException : public std::exception {
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char *what(void) const throw();
		};

		std::string const	getName(void) const;
		int 				getGrade(void) const;
		void 				IncrementGrade(void);
		void 				DecrementGrade(void);
		bool				signForm(Form &form);
		bool				executeForm(Form const &form);
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif /* BUREAUCRAT_HPP */

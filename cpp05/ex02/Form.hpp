/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:08:47 by tjinichi          #+#    #+#             */
/*   Updated: 2021/07/10 06:09:19 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <climits>
# include "Bureaucrat.hpp"
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

class Bureaucrat;

class Form
{
	protected:
		Form(void);
		Form &operator=(Form const &other);
		Form(Form const &other);

	private:
		std::string const	name_;
		bool				isSigned_;
		int const			signGrade_;
		int const			execGrade_;

	public:
		Form(std::string name, int signGrade, int execGrade);
		virtual ~Form(void);

		class GradeTooHighException : public std::exception {
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char *what(void) const throw();
		};
		class AlreadySignedExecption : public std::exception {
			virtual const char *what(void) const throw();
		};
		class NotYetSigned : public std::exception {
			virtual const char *what(void) const throw();
		};

		std::string const	getName(void) const;
		int 				getSignGrade(void) const;
		int 				getExecGrade(void) const;
		int 				getIsSigned(void) const;

		void				beSigned(Bureaucrat &bureaucrat);
		virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif /* FORM_HPP */

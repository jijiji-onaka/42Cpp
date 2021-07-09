/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 04:48:13 by tjinichi          #+#    #+#             */
/*   Updated: 2021/07/10 05:19:16 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <climits>
# include "Form.hpp"
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

# define ROBOTOMY_SIGN_GRADE 72
# define ROBOTOMY_EXEC_GRADE 45

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

		std::string	target_;

	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);

		void		execute(Bureaucrat const &executor) const;
};

#endif /* ROBOTOMYREQUESTFORM_HPP */

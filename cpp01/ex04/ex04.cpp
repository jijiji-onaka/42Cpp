/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:44:26 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/11 12:51:19 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define YELLOW "\033[33m"
# define RED "\033[38;5;196m"
# define GREEN "\033[38;5;34m"
# define PURPLE "\033[38;5;105m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

int	main(void)
{
	std::string	original_str = "HI THIS IS BRAIN";

	std::string	*ptr = &original_str;

	std::string	&ref = original_str;

	std::cout << GREEN""BOLD"Original String"RESET << std::endl;
	std::cout << original_str << std::endl;
	std::cout << &original_str << std::endl << std::endl;

	std::cout << GREEN""BOLD"Pointer String"RESET << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << std::hex << ptr << std::endl << std::endl;

	std::cout << GREEN""BOLD"Reference String"RESET << std::endl;
	std::cout << ref << std::endl;
	std::cout << std::hex << &ref << std::endl;

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:44:26 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 03:34:04 by tjinichi         ###   ########.fr       */
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

	std::string	*stringPTR = &original_str;

	std::string	&stringREF = original_str;

	std::cout << GREEN""BOLD"Original String address"RESET << std::endl;
	std::cout << &original_str << std::endl << std::endl;
	std::cout << GREEN""BOLD"Pointer String address"RESET << std::endl;
	std::cout << std::hex << stringPTR << std::endl << std::endl;
	std::cout << GREEN""BOLD"Reference String address"RESET << std::endl;
	std::cout << std::hex << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << GREEN""BOLD"Pointer String"RESET << std::endl;
	std::cout << *stringPTR << std::endl << std::endl;
	std::cout << GREEN""BOLD"Reference String"RESET << std::endl;
	std::cout << stringREF << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 04:21:22 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 05:42:33 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;
	int		check;

	if (argc != 2)
	{
		std::cerr << RED"ERROR"RESET": wrong argument" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string	arg = argv[1];
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	check = 5;
	if (arg == "ERROR")
		check = 3;
	else if (arg == "WARNING")
		check = 2;
	else if (arg == "INFO")
		check = 1;
	else if (arg == "DEBUG")
		check = 0;

	if (check == 5)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	for (int i = check; i < 4; ++i)
	{
		std::cout << "[ " << levels[i] << " ]" << std::endl;
		karen.complain(levels[i]);
	}
}

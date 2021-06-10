/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 23:52:32 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/09 02:50:02 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_SUCCESS);
	}
	argv++;
	while (*argv)
	{
		for (size_t i = 0; (*argv)[i]; i++)
			(*argv)[i] = std::toupper((*argv)[i]);
		std::cout << *argv;
		argv++;
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

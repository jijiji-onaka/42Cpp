/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 04:04:57 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/27 04:20:52 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::debug(void)
{
	std::cout << PURPLE""BOLD"==== debug ===="RESET << std::endl;
}

void	Karen::info(void)
{
	std::cout << GREEN""BOLD"==== info ===="RESET << std::endl;
}

void	Karen::warning(void)
{
	std::cout << YELLOW""BOLD"==== warning ===="RESET << std::endl;
}

void	Karen::error(void)
{
	std::cout << RED""BOLD"==== error ===="RESET << std::endl;
}

void	Karen::complain(std::string level)
{
	if (level == "DEBUG")
		this->debug();
	else if (level == "INFO")
		this->info();
	else if (level == "WARNING")
		this->warning();
	else if (level == "ERROR")
		this->error();
}

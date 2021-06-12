/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:17:01 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/11 15:54:39 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify(void)
{
	std::stringstream	sst;
	sst << this;


	std::string	address = sst.str();
	size_t		len = address.length();
	for (size_t i = 2; i < len; ++i)
	{
		address[i] = std::toupper(address[i]);
	}
	return (address);
}

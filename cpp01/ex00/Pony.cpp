/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 20:32:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/10 22:07:59 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string Horse_whinny, int weight)
{
	this->Horse_whinny = Horse_whinny;
	this->weight = weight;
}

void	Pony::whinny(void)
{
	std::cout << this->Horse_whinny << std::endl;
	std::cout << "I'm " << (int)(this->weight) << "kg." << std::endl;
	std::cout << std::hex << this << std::dec << std::endl;
}

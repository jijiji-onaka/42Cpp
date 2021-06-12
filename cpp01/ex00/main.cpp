/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 21:13:12 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/13 00:15:19 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void	ponyOnTheHeap(void)
{
	Pony	*heap_pony;
	try
	{
		heap_pony = new Pony("Heeeeeeep", 53);
	}
	catch(std::bad_alloc e)
	{
		std::cerr << "ponyOnTheHeap: " << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	heap_pony->whinny();
	delete heap_pony;
}

static void	ponyOnTheStack(void)
{
	Pony	stack_pony("Staaaaack", 31);

	stack_pony.whinny();
}

int	main()
{
	std::cout << GREEN""BOLD"    Heap    "RESET << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << GREEN""BOLD"    Stack    "RESET << std::endl;
	ponyOnTheStack();
	return (0);
}

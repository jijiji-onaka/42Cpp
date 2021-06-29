/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 04:10:50 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 06:52:57 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int	main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISquad *vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	/*
	std::cout << "------- My test Start -------" << std::endl;
	// // Copy Constructor/Assign Check // //
	ISpaceMarine *suneo = new AssaultTerminator;
	ISpaceMarine *gian = new TacticalMarine;
	ISpaceMarine *shizu = new AssaultTerminator;
	Squad	dora;
	dora.push(suneo);
	dora.push(gian);
	dora.push(shizu);
	Squad	nobi(dora);
	std::cout << "[SRC]" << std::endl;
	for (int i = 0; i < dora.getCount(); ++i)
	{
		ISpaceMarine *cur = dora.getUnit(i);
		std::cout << BOLD"[Address] = "<< cur << RESET << std::endl;
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "[COPY]" << std::endl;
	for (int i = 0; i < nobi.getCount(); ++i)
	{
		ISpaceMarine *cur = nobi.getUnit(i);
		std::cout << BOLD"[Address] = "<< cur << RESET << std::endl;
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "[ASSIGN]" << std::endl;
	nobi = dora;
	for (int i = 0; i < nobi.getCount(); ++i)
	{
		ISpaceMarine *cur = nobi.getUnit(i);
		std::cout << BOLD"[Address] = "<< cur << RESET << std::endl;
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	ISquad	*abc = new Squad(dora);
	delete abc;

	vlc = new Squad;
	ISpaceMarine *cur = vlc->getUnit(-1);
	if (cur == NULL)
		std::cout << GREEN_3""BOLD"OK"RESET << std::endl;
	else
		std::cout << RED_2""BOLD"NG"RESET << std::endl;

	cur = vlc->getUnit(10);
	if (cur == NULL)
		std::cout << GREEN_3""BOLD"OK"RESET << std::endl;
	else
		std::cout << RED_2""BOLD"NG"RESET << std::endl;

	ISpaceMarine *TheTouch = new AssaultTerminator;
	if (vlc->push(TheTouch) == true)
		std::cout << GREEN_3""BOLD"OK"RESET << std::endl;
	else
		std::cout << RED_2""BOLD"NG"RESET << std::endl;
	if (vlc->push(TheTouch) == false)
		std::cout << GREEN_3""BOLD"OK"RESET << std::endl;
	else
		std::cout << RED_2""BOLD"NG"RESET << std::endl;
	if (vlc->push(NULL) == false)
		std::cout << GREEN_3""BOLD"OK"RESET << std::endl;
	else
		std::cout << RED_2""BOLD"NG"RESET << std::endl;
	delete vlc;

	*/
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 00:06:21 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 03:35:13 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "AirCannon.hpp"
#include "Gian.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	// std::cout << "------- My test Start -------" << std::endl;
	// AWeapon *ac = new AirCannon();
	// b = new SuperMutant();
	// me->equip(ac);
	// std::cout << *me;
	// me->attack(b);
	// b = new Gian();
	// std::cout << *me;
	// me->attack(b);
	// me->recoverAP();
	// me->recoverAP();
	// me->attack(b);
	// me->attack(NULL);
	// me->equip(NULL);
	// std::cout << *me;
	// delete ac;

	delete pr;
	delete pf;
	delete me;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 07:56:18 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 11:36:14 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	/*
	std::cout << "------- My test Start -------" << std::endl;
	src = new MateriaSource();
	Character	*test = new Character("test");
	bob = new Character("bob");

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(NULL);

	// 1
	std::cout << BLUE""BOLD"[Setting]"RESET << std::endl;
	AMateria	*idx_0 = src->createMateria("ice");
	test->equip(idx_0);
	test->use(0, *bob);
	// 2
	AMateria	*idx_1 = src->createMateria("cure");
	test->equip(idx_1);
	test->use(1, *bob);
	// 3
	AMateria	*idx_2 = src->createMateria("fire");
	if (idx_2 == NULL)
		std::cout << GREEN_3""BOLD"Error Cheak: Tried to create an unconfigured Materia : OK"RESET << std::endl;
	idx_2 = src->createMateria("ice");
	test->equip(idx_2);
	test->use(2, *bob);
	// 4
	AMateria	*idx_3 = src->createMateria("cure");
	test->equip(idx_3);
	test->use(3, *bob);
	std::cout << BLUE""BOLD"[First equipment]"RESET << std::endl;
	test->putStatus(0);
	test->putStatus(1);
	test->putStatus(2);
	test->putStatus(3);

	test->use(0, *bob);
	test->use(1, *bob);
	test->use(2, *bob);
	test->use(3, *bob);
	std::cout << BLUE""BOLD"[Second equipment]"RESET << std::endl;
	test->putStatus(0);
	test->putStatus(1);
	test->putStatus(2);
	test->putStatus(3);

	std::cout << BLUE""BOLD"[idx(2) unequip]"RESET << std::endl;
	test->unequip(2);
	test->putStatus(0);
	test->putStatus(1);
	test->putStatus(2);
	test->putStatus(3);

	std::cout << BLUE""BOLD"[idx(2) re equip]"RESET << std::endl;
	test->equip(idx_2);
	test->putStatus(0);
	test->putStatus(1);
	test->putStatus(2);
	test->putStatus(3);

	std::cout << BLUE""BOLD"[idx(0) idx(1) use]"RESET << std::endl;
	test->use(0, *bob);
	test->use(1, *bob);
	test->putStatus(0);
	test->putStatus(1);
	test->putStatus(2);
	test->putStatus(3);

	std::cout << BLUE""BOLD"[all idx unequip]"RESET << std::endl;
	test->unequip(0);
	test->unequip(0);
	test->unequip(0);
	test->unequip(0);
	test->unequip(2);
	test->unequip(3);
	test->putStatus(0);
	test->putStatus(1);
	test->putStatus(2);
	test->putStatus(3);

	std::cout << BLUE""BOLD"[all idx re equip]"RESET << std::endl;
	test->equip(idx_0);
	test->equip(idx_1);
	test->equip(idx_2);
	test->equip(idx_3);
	test->putStatus(0);
	test->putStatus(1);
	test->putStatus(2);
	test->putStatus(3);

	std::cout << BLUE""BOLD"[idx is OutOfRange] -> If there is no indication, OK"RESET << std::endl;
	test->use(4, *bob);
	test->use(-1, *bob);
	test->use(9, *bob);



	std::cout << BLUE""BOLD"[Copy Constructor]"RESET << std::endl;
	{
		MateriaSource copy_1;
		copy_1.learnMateria(new Ice());
		MateriaSource copy_2(copy_1);
		Character	test_2(*test);
		copy_2.learnMateria(new Cure());

		test_2.putStatus(0);
		test_2.putStatus(1);
		test_2.putStatus(2);
		test_2.putStatus(3);
	}
	{
		MateriaSource copy_1;
		copy_1.learnMateria(new Ice());
		MateriaSource copy_2(copy_1);
		Character	test_2("test_2");
		copy_2.learnMateria(new Cure());
		AMateria	*_idx_0 = copy_2.createMateria("ice");
		AMateria	*_idx_1 = copy_2.createMateria("ice");
		AMateria	*_idx_2 = copy_2.createMateria("cure");

		test_2.equip(_idx_0);
		test_2.equip(_idx_1);
		test_2.equip(_idx_2);
		test_2.putStatus(0);
		test_2.putStatus(1);
		test_2.putStatus(2);
		test_2.putStatus(3);
	}

	std::cout << BLUE""BOLD"[Assignment Operator]"RESET << std::endl;
	{
		Character	test_3("tmp");
		test_3 = *test;
		test_3.putStatus(0);
		test_3.putStatus(1);
		test_3.putStatus(2);
		test_3.putStatus(3);
	}

	delete bob;
	delete test;
	delete src;

	return 0;
	*/
}

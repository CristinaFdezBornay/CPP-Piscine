/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 00:07:39 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 20:35:50 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int
main(void)
{
	IMateriaSource* src = new MateriaSource();
	AMateria* tmp;
	src->learnMateria((tmp = new Ice()));
	delete tmp;
	src->learnMateria((tmp = new Cure()));
	delete tmp;
	
	Character* moi = new Character("moi");

	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	const AMateria* tmp2 = moi->get(0);
	std::cout << "XP: " << tmp2->getXP() << std::endl;
	for (int i = 0;i < 4;i++)
		moi->use(i, *bob);
	for (int i = 0;i < 4;i++)
		bob->use(i, *moi);
	std::cout << "XP: " << tmp2->getXP() << std::endl;
	

	moi->equip(src->createMateria("cure"));
	if (src->createMateria("truc") == NULL)
		std::cout << "I don't understand" << std::endl;
	moi->equip(src->createMateria("ice"));
	moi->equip(src->createMateria("toto"));

	moi->unequip(-1);
	moi->unequip(5);
	moi->unequip(0);
	moi->unequip(1);

	for (int i = 0;i < 4;i++)
	{
		std::cout << "get(" << i << "): " << moi->get(i) << std::endl;
		moi->use(i, *bob);
	}

	delete bob;
	delete moi;
	delete src;
	
	return 0;
}

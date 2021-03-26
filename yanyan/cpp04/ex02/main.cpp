/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 20:10:13 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 18:04:01 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main(void)
{
	ISquad* vlc = new Squad;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	std::cout << "size: " << vlc->getCount() << std::endl;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	vlc->getUnit(0)->battleCry();
	vlc->getUnit(1)->battleCry();
	vlc->getUnit(0)->rangedAttack();
	vlc->getUnit(1)->rangedAttack();
	vlc->getUnit(0)->meleeAttack();
	vlc->getUnit(1)->meleeAttack();
	std::cout << vlc->getUnit(10) << " | " << vlc->getUnit(-42) << std::endl;

	std::cout << "size: " << vlc->getCount() << std::endl;

	delete vlc;

	return (0);
}

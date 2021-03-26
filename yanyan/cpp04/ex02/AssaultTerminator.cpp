/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 20:08:51 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 20:47:23 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator
&AssaultTerminator::operator= (const AssaultTerminator &rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine*
AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator);
}

void
AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void
AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void
AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 20:56:04 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 01:42:06 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice &src)
{
	*this = src;
}

Ice::~Ice(void) {}

Ice&
Ice::operator= (const Ice &rhs)
{
	if (this != &rhs)
	{
		this->m_xp = rhs.m_xp;
		this->m_type = rhs.m_type;
	}
	return (*this);
}

AMateria*
Ice::clone(void) const
{
	return (new Ice());
}

void
Ice::use(ICharacter& target)
{
	m_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

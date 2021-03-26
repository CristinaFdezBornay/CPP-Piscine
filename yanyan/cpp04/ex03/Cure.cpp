/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 21:04:19 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 01:42:28 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure &src)
{
	*this = src;
}

Cure::~Cure(void) {}

Cure&
Cure::operator= (const Cure &rhs)
{
	if (this != &rhs)
	{
		this->m_xp = rhs.m_xp;
		this->m_type = rhs.m_type;
	}
	return (*this);
}

AMateria*
Cure::clone(void) const
{
	return (new Cure());
}

void
Cure::use(ICharacter& target)
{
	m_xp += 10;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

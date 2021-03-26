/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 20:41:57 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 20:44:54 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(const std::string &type)
{
	this->m_xp = 0;
	this->m_type = type;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria::~AMateria(void) {}

AMateria&
AMateria::operator= (const AMateria &rhs)
{
	if (this != &rhs)
	{
		this->m_xp = rhs.m_xp;
		this->m_type = rhs.m_type;
	}
	return (*this);
}

const std::string&
AMateria::getType(void) const
{
	return (this->m_type);
}

unsigned int
AMateria::getXP(void) const
{
	return (this->m_xp);
}

void
AMateria::use(ICharacter& target)
{
	m_xp += 10;
	(void)target;
}

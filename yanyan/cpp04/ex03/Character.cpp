/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 23:43:11 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 20:43:44 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {}

Character::Character(const std::string& name)
{
	this->m_name = name;
	for (int i = 0;i < 4;i++)
		this->m_inv[i] = NULL;
}

Character::Character(const Character &src)
{
	*this = src;
	return ;
}

Character::~Character(void)
{
	for (int i = 0;i < 4;i++)
		if (this->m_inv[i] != NULL)
			delete this->m_inv[i];
}

Character&
Character::operator= (const Character &rhs)
{
	if (this != &rhs)
	{
		this->m_name = rhs.m_name;
		for (int i = 0;i < 4;i++)
		{
			if (this->m_inv[i] != NULL)
				delete this->m_inv[i];
			this->m_inv[i] = rhs.m_inv[i]->clone();
		}
	}
	return (*this);
}

std::string const&
Character::getName() const
{
	return (this->m_name);
}

AMateria const*
Character::get(int idx) const
{
	if (idx >= 0 && idx < 4 && this->m_inv[idx] != NULL)
		return (this->m_inv[idx]);
	return (NULL);
}

void
Character::equip(AMateria* src)
{
	for (int i = 0;i < 4;i++)
	{
		if (this->m_inv[i] == NULL)
		{
			this->m_inv[i] = src;
			return ;
		}
	}
}

void
Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->m_inv[idx] != NULL)
	{
		delete this->m_inv[idx];
		this->m_inv[idx] = NULL;
	}
}

void
Character::use(int idx, ICharacter& dest)
{
	if (idx >= 0 && idx < 4 && this->m_inv[idx] != NULL)
		this->m_inv[idx]->use(dest);
}

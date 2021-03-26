/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 00:38:11 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 20:39:22 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0;i < 4;i++)
		this->m_inv[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	*this = src;
}

MateriaSource&
MateriaSource::operator= (const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0;i < 4;i++)
		{
			if (this->m_inv[i] != NULL)
				delete this->m_inv[i];
			this->m_inv[i] = rhs.m_inv[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource (void)
{
	for (int i = 0;i < 4;i++)
		if (this->m_inv[i] != NULL)
			delete this->m_inv[i];
}

void
MateriaSource::learnMateria(AMateria* src)
{
	for (int i = 0;i < 4;i++)
	{
		if (this->m_inv[i] == NULL)
		{
			this->m_inv[i] = src->clone();
			return ;
		}
	}
}

AMateria*
MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0;i < 4;i++)
	{
		if (this->m_inv[i] != NULL && this->m_inv[i]->getType() == type)
			return (m_inv[i]->clone());
	}
	return (NULL);
}

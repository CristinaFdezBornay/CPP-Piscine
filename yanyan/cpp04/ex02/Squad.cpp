/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 19:14:44 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 20:46:57 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	this->m_nbUnit = 0;
	this->m_squad = NULL;
}

Squad::Squad(const Squad &src)
{
	this->m_nbUnit = src.getCount();
	this->m_destroy();
	this->m_copy(src);
}

Squad&	Squad::operator = (const Squad &rhs)
{
	if (this != &rhs)
	{
		this->m_destroy();
		this->m_copy(rhs);
		this->m_nbUnit = rhs.getCount();
	}
	return (*this);
}

int		Squad::getCount() const
{
	return (this->m_nbUnit);
}

Squad::~Squad(void)
{
	this->m_destroy();
}

ISpaceMarine*	Squad::getUnit(int pos) const
{
	t_container		*tmp;

	tmp = this->m_squad;
	if (pos < 0 || pos >= this->m_nbUnit)
		return (NULL);
	while (pos--)
		tmp = tmp->next;
	return (tmp->unit);
}

int		Squad::push(ISpaceMarine* unit)
{
	t_container		*tmp;

	tmp = this->m_squad;
	if (unit != NULL && this->m_present(unit, tmp) == false)
	{
		if (this->m_squad != NULL)
		{
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new t_container;
			tmp->next->unit = unit;
			tmp->next->next = NULL;
		}
		else
		{
			this->m_squad = new t_container;
			this->m_squad->unit = unit;
			this->m_squad->next = NULL;
		}
		this->m_nbUnit += 1;
	}
	return (this->m_nbUnit);
}

void	Squad::m_copy(const Squad &src)
{
	int		i;
	int		nb;

	i = -1;
	nb = src.getCount();
	while (++i < nb)
		this->push(src.getUnit(i));
}

void	Squad::m_destroy(void)
{
	t_container	*tmp;

	if (this->m_squad != NULL)
	{
		delete this->m_squad->unit;
		tmp = this->m_squad;
		this->m_squad = this->m_squad->next;
		delete tmp;
		return (this->m_destroy());
	}
}

bool	Squad::m_present(ISpaceMarine* unit, t_container* squad)
{
	if (squad == NULL)
		return (false);
	else if (unit == squad->unit)
		return (true);
	else
		return (this->m_present(unit, squad->next));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 02:41:51 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:44:59 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge(void)
{
	for (int i = 0;i < 4;i++)
		m_laser[i] = NULL;
}

MiningBarge::MiningBarge(const MiningBarge & src)
{
	for (int i = 0;i < 4;i++)
		m_laser[i] = src.m_laser[i];
}

MiningBarge::~MiningBarge(void) {}

MiningBarge & MiningBarge::operator=(const MiningBarge & src)
{
	for (int i = 0;i < 4;i++)
		m_laser[i] = src.m_laser[i];
	return (*this);
}

void
MiningBarge::equip(IMiningLaser* laser)
{
	for (int i = 0;i < 4;i++)
	{
		if (m_laser[i] == NULL)
		{
			m_laser[i] = laser;
			return ;
		}
	}
}

void
MiningBarge::mine(IAsteroid* target) const
{
	for (int i = 0;i < 4;i++)
	{
		if (m_laser[i] != NULL)
			m_laser[i]->mine(target);
	}
}

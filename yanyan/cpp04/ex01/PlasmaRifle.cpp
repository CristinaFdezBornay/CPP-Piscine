/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:48:39 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/20 15:00:02 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage)
{
	this->m_name = name;
	this->m_AP = apcost;
	this->m_damage = damage;
	this->m_attack = "* piouuu piouuu piouuu *";
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& old)
{
	this->m_name = old.getName();
	this->m_AP = old.getAPCost();
	this->m_damage = old.getDamage();
	this->m_attack = "* piouuu piouuu piouuu *";
}

PlasmaRifle&	PlasmaRifle::operator = (const PlasmaRifle& copy)
{
	this->m_name = copy.getName();
	this->m_AP = copy.getAPCost();
	this->m_damage = copy.getDamage();
	this->m_attack = "* piouuu piouuu piouuu *";
	return (*this);
}

PlasmaRifle::~PlasmaRifle(void)
{
}

void		PlasmaRifle::attack(void) const
{
	std::cout << this->m_attack << std::endl;
}

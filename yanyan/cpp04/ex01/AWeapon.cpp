/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:27:37 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/20 14:51:52 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->m_name = name;
	this->m_AP = apcost;
	this->m_damage = damage;
	this->m_attack = "";
}

AWeapon::AWeapon(const AWeapon& old)
{
	this->m_name = old.getName();
	this->m_AP = old.getAPCost();
	this->m_damage = old.getDamage();
	this->m_attack = "";
}

AWeapon&	AWeapon::operator = (const AWeapon& copy)
{
	this->m_name = copy.getName();
	this->m_AP = copy.getAPCost();
	this->m_damage = copy.getDamage();
	this->m_attack = "";
	return (*this);
}

AWeapon::~AWeapon(void)
{
}

std::string	AWeapon::getName(void) const
{
	return (this->m_name);
}

int			AWeapon::getAPCost(void) const
{
	return (this->m_AP);
}

int			AWeapon::getDamage(void) const
{
	return (this->m_damage);
}

void		AWeapon::attack(void) const
{
	std::cout << this->m_attack << std::endl;
}

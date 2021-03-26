/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:01:38 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/20 15:04:32 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(std::string const & name, int apcost, int damage)
{
	this->m_name = name;
	this->m_AP = apcost;
	this->m_damage = damage;
	this->m_attack = "* pschhh... SBAM ! *";
}

PowerFist::PowerFist(const PowerFist& old)
{
	this->m_name = old.getName();
	this->m_AP = old.getAPCost();
	this->m_damage = old.getDamage();
	this->m_attack = "* pschhh... SBAM ! *";
}

PowerFist&	PowerFist::operator = (const PowerFist& copy)
{
	this->m_name = copy.getName();
	this->m_AP = copy.getAPCost();
	this->m_damage = copy.getDamage();
	this->m_attack = "* pschhh... SBAM ! *";
	return (*this);
}

PowerFist::~PowerFist(void)
{
}

void		PowerFist::attack(void) const
{
	std::cout << this->m_attack << std::endl;
}

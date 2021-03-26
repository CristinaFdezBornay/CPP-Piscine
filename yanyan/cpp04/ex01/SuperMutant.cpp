/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:21:46 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/20 16:07:05 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int hp, std::string const & type)
{
	this->m_HP = hp;
	this->m_type = type;
	this->m_born = "Gaaah. Break everything !";
	this->m_die = "Aaargh ...";
	std::cout << this->m_born << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& old)
{
	this->m_HP = old.getHP();
	this->m_type = old.getType();
	this->m_born = "Gaaah. Break everything !";
	this->m_die = "Aaargh ...";
	std::cout << this->m_born << std::endl;
}

SuperMutant&	SuperMutant::operator = (const SuperMutant& copy)
{
	this->m_type = copy.getType();
	this->m_HP = copy.getHP();
	this->m_born = "Gaaah. Break everything !";
	this->m_die = "Aaargh ...";
	return (*this);
}

SuperMutant::~SuperMutant(void)
{
	std::cout << this->m_die << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
	damage = (damage < 3 ? 0 : 3);
	if (damage >= 0)
	{
		damage = (this->m_HP - damage < 0 ? this->m_HP : damage);
		this->m_HP -= damage;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:12:29 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/15 17:36:40 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	m_hit_points = 0;
	m_max_hit_points = 0;
	m_energy_points = 0;
	m_max_energy_points = 0;
	m_level = 0;
	m_name = name;
	m_melee_attack = 0;
	m_ranged_attack = 0;
	m_armor_reduction = 0;
	std::cout << m_name << " just born" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << m_name << " go out" << std::endl;
}

unsigned int	ClapTrap::meleeAttack(std::string const & target)
{
	if (this->m_hit_points == 0)
		std::cout << "Oops, " << this->m_name << " are out of service" << std::endl;
	else
	{
		std::cout << this->m_name << " tried to uses melee attack on " << target << " ! -" << this->m_melee_attack << std::endl;
		return (this->m_melee_attack);
	}
	return (0);
}

unsigned int	ClapTrap::rangedAttack(std::string const & target)
{
	if (this->m_hit_points == 0)
		std::cout << "Oops, " << this->m_name << " are out of service" << std::endl;
	else
	{
		std::cout << this->m_name << " tried to launches ranged attack on " << target << " ! -" << this->m_ranged_attack << std::endl;
		return (this->m_ranged_attack);
	}
	return (0);
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	amount -= (amount < this->m_armor_reduction ? amount : this->m_armor_reduction);
	if (this->m_hit_points < amount)
	{
		this->m_hit_points = 0;
		std::cout << this->m_name << " died :(" << std::endl;
	}
	else
	{
		this->m_hit_points -= amount;
		std::cout << this->m_name << " lost " << amount << " hit points... (" << this->m_hit_points << ")" << std::endl;
	}
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if (this->m_hit_points + amount > this->m_max_hit_points)
		amount = this->m_max_hit_points - this->m_hit_points;
	this->m_hit_points += amount;
	this->m_energy_points = this->m_max_energy_points;
	std::cout << "A mechanic repaired " << amount << " hit points on " << this->m_name << " (" << this->m_hit_points << ")" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:50:14 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/14 18:10:16 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	m_hit_points = 100;
	m_max_hit_points = 100;
	m_energy_points = 50;
	m_max_energy_points = 50;
	m_level = 1;
	m_name = name;
	m_melee_attack = 20;
	m_ranged_attack = 15;
	m_armor_reduction = 3;
	std::cout << m_name << " just born to open the door" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << m_name << " went to another door" << std::endl;
}

unsigned int	ScavTrap::meleeAttack(std::string const & target)
{
	if (this->m_hit_points == 0)
		std::cout << "Oops, " << this->m_name << " are out of service" << std::endl;
	else
	{
		std::cout << this->m_name << " uses the door to perform melee attack on " << target << " ! -" << this->m_melee_attack << std::endl;
		return (this->m_melee_attack);
	}
	return (0);
}

unsigned int	ScavTrap::rangedAttack(std::string const & target)
{
	if (this->m_hit_points == 0)
		std::cout << "Oops, " << this->m_name << " are out of service" << std::endl;
	else
	{
		std::cout << this->m_name << " uses the door to perform ranged attack on " << target << " ! -" << this->m_ranged_attack << std::endl;
		return (this->m_ranged_attack);
	}
	return (0);
}

void			ScavTrap::takeDamage(unsigned int amount)
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
		std::cout << this->m_name << " gives " << amount << " hit points to the door... (" << this->m_hit_points << ")" << std::endl;
	}
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	if (this->m_hit_points + amount > this->m_max_hit_points)
		amount = this->m_max_hit_points - this->m_hit_points;
	this->m_hit_points += amount;
	this->m_energy_points = this->m_max_energy_points;
	std::cout << "A mechanic repaired " << amount << " hit points on " << this->m_name << "'door (" << this->m_hit_points << ")" << std::endl;
}

unsigned int	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string		challenges[] = {"lecher ton coude 42 fois", "ecraser ton pied droit avec ton pied droit", "faire la danse des canards", "faire la \"stack dance\"", "refaire le tiktok de JujuFitCat"};
	if (this->m_hit_points == 0)
		std::cout << "Oops, " << this->m_name << " are out of service" << std::endl;
	else if (this->m_energy_points < 10)
		std::cout << "Oops, " << this->m_name << " needs new door" << std::endl;
	else
	{
		this->m_energy_points -= 10;
		std::cout << this->m_name << " launch a challenge ! " << target << " need " << challenges[std::rand() % 5] << std::endl;
		return (10);
	}
	return (0);
}

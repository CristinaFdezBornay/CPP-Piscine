/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:50:14 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/15 17:43:00 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
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

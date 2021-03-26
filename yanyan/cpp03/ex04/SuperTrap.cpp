/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:52:14 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/15 19:28:45 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	m_hit_points = 100;
	m_max_hit_points = 100;
	m_energy_points = 120;
	m_max_energy_points = 120;
	m_level = 1;
	m_name = name;
	m_melee_attack = 60;
	m_ranged_attack = 20;
	m_armor_reduction = 5;
	std::cout << m_name << " just born to be a hero" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << m_name << " took his battleship" << std::endl;
}

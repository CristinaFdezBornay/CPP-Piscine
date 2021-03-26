/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:37:18 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/15 18:25:20 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	m_hit_points = 100;
	m_max_hit_points = 100;
	m_energy_points = 100;
	m_max_energy_points = 100;
	m_level = 1;
	m_name = name;
	m_melee_attack = 30;
	m_ranged_attack = 20;
	m_armor_reduction = 5;
	std::cout << m_name << " just born to be alive" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << m_name << " went to another dimension" << std::endl;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string		attacks[] = {"dansing attack", "sleeping attack", "involuntary attack", "panic attack", "gogo gadget au taser"};
	if (this->m_hit_points == 0)
		std::cout << "Oops, " << this->m_name << " are out of service" << std::endl;
	else if (this->m_energy_points < 25)
		std::cout << "Oops, " << this->m_name << " needs new powercell" << std::endl;
	else
	{
		this->m_energy_points -= 25;
		std::cout << this->m_name << " tried " << attacks[std::rand() % 5] << " on " << target << " ! -10" << std::endl;
		return (10);
	}
	return (0);
}

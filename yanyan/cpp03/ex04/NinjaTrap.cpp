/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:01:29 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/05 02:02:44 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	m_hit_points = 60;
	m_max_hit_points = 60;
	m_energy_points = 120;
	m_max_energy_points = 120;
	m_level = 1;
	m_name = name;
	m_melee_attack = 60;
	m_ranged_attack = 5;
	m_armor_reduction = 0;
	std::cout << m_name << " just born to be invisible" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << m_name << " became a ronin" << std::endl;
}

void		NinjaTrap::ninjaShoebox(const ClapTrap& target)
{
	std::cout << "Don't panic!" << std::endl <<
				" And don't disturb me, I can't talk to you" << std::endl <<
				" Really, just don't talk to me, I hate you dude" << std::endl;
	(void)target;
}

void		NinjaTrap::ninjaShoebox(const FragTrap& target)
{
	std::cout << "tututu..." << std::endl <<
				" It's good to be alive" << std::endl <<
				" To be alive" << std::endl <<
				" To be alive" << std::endl;
	(void)target;
}

void		NinjaTrap::ninjaShoebox(const ScavTrap& target)
{
	std::cout << "Ow! After 42 years to keep my door open," <<
				"you're the first humanoid that want talk to me" << std::endl <<
				" Grazie mille truc..." << std::endl <<
				" My italian is rusty, like my door :(" << std::endl;
	(void)target;
}

void		NinjaTrap::ninjaShoebox(const NinjaTrap& target)
{
	std::cout << "Shit, you call me with me? really?" << std::endl <<
				" You're not in Inception" << std::endl <<
				" Go out my method Human!" << std::endl;
	(void)target;
}

void		NinjaTrap::ninjaShoebox(const SuperTrap& target)
{
	std::cout << "I'M JUST BETER THAN YOU, GO OUT" << std::endl;
	(void)target;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:51:08 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/06 03:18:47 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class	ScavTrap
{
	private:

	unsigned int	m_hit_points;
	unsigned int	m_max_hit_points;
	unsigned int	m_energy_points;
	unsigned int	m_max_energy_points;
	unsigned int	m_level;
	std::string		m_name;
	unsigned int	m_melee_attack;
	unsigned int	m_ranged_attack;
	unsigned int	m_armor_reduction;

	public:

	ScavTrap(std::string name);
	~ScavTrap(void);
	unsigned int		meleeAttack(std::string const & target);
	unsigned int		rangedAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	unsigned int		challengeNewcomer(std::string const & target);
};

#endif

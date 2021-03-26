/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:31:03 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/06 03:19:35 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class	ClapTrap
{
	protected:

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

	ClapTrap(std::string name);
	~ClapTrap(void);
	unsigned int		meleeAttack(std::string const & target);
	unsigned int		rangedAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
};

#endif

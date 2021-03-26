/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:23:00 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/08 18:34:04 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class	AWeapon
{
	protected:
	std::string		m_name;
	int				m_AP;
	int				m_damage;
	std::string		m_attack;

	public:
	AWeapon(std::string const & name = "", int apcost = 0, int damage = 0);
	AWeapon(const AWeapon& old);
	AWeapon&	operator = (const AWeapon& copy);
	virtual ~AWeapon(void);
	std::string		getName(void) const;
	int				getAPCost(void) const;
	int				getDamage(void) const;
	virtual void	attack(void) const = 0;
};

#endif

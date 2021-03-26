/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:20:29 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/21 17:16:50 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	private:
	std::string		m_name;
	int				m_AP;
	AWeapon			*m_weapon;

	public:
	Character(std::string const & name = "");
	Character(const Character& old);
	Character&	operator = (const Character& copy);
	~Character(void);

	void		recoverAP(void);
	void		equip(AWeapon*);
	void		attack(Enemy*);

	std::string	getName(void) const;
	int			getAP(void) const;
	AWeapon		*getWeapon(void) const;
};

std::ostream &operator << (std::ostream &o, Character const &rhs);

#endif

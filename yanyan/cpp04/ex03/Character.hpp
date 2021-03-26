/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 23:37:03 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 19:55:26 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		AMateria*	m_inv[4];
		std::string	m_name;

	public:
		Character(void);
		Character(const std::string &name);
		Character(const Character&);
		Character &operator=	(const Character&);
		virtual ~Character(void);

		virtual std::string const&	getName() const;
		virtual AMateria const*		get(int) const;

		virtual void	equip(AMateria*);
		virtual void	unequip(int);
		virtual void 	use(int, ICharacter&);
};

#endif

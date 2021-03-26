/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 20:38:50 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 01:39:09 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	public:
		AMateria(void);
		AMateria(const std::string&);
		AMateria(const AMateria&);
		virtual	~AMateria(void);

		AMateria &operator=	(const AMateria&);

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter&);

		unsigned int		getXP(void) const;
		const std::string&	getType(void) const;

	protected:
		unsigned int	m_xp;
		std::string		m_type;
};

#endif

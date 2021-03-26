/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 00:31:38 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 20:16:32 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*m_inv[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource&);
		MateriaSource &operator=	(const MateriaSource&);

		virtual				~MateriaSource();

		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const&);
};

#endif


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 20:52:38 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 01:41:54 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice&);

		~Ice(void);

		Ice&	operator= (const Ice&);

		AMateria*		clone(void) const;
		virtual void	use(ICharacter&);
};

#endif

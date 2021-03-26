/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 21:03:33 by hexa              #+#    #+#             */
/*   Updated: 2020/04/27 21:04:09 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure&);

		~Cure(void);

		Cure&	operator= (const Cure&);

		AMateria*		clone(void) const;
		virtual void	use(ICharacter&);
};

#endif

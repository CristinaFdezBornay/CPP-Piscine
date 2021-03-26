/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 23:35:10 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 19:52:31 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <cstdlib>
# include <iostream>
# include "AMateria.hpp"

class	AMateria;

class	ICharacter
{
	public:
		virtual		~ICharacter() {}

		virtual std::string const&	getName() const = 0;

		virtual void	equip(AMateria*) = 0;
		virtual void	unequip(int) = 0;
		virtual void	use(int, ICharacter&) = 0;};

#endif

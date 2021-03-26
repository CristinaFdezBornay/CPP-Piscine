/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 19:48:53 by hexa              #+#    #+#             */
/*   Updated: 2020/04/27 20:13:48 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>

class ISpaceMarine
{
	public:
		virtual					~ISpaceMarine(void) {}
		virtual ISpaceMarine	*clone(void) const = 0;
		virtual void			battleCry(void) const = 0;
		virtual void			meleeAttack(void) const = 0;
		virtual void			rangedAttack(void) const = 0;
};

#endif

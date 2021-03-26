/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 01:50:33 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:52:29 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

# include <iostream>
# include "IAsteroid.hpp"

class	IAsteroid;

class	IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}

		virtual void	mine(IAsteroid*) = 0;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 02:30:47 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:38:47 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Asteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

Asteroid::Asteroid(void) {}

Asteroid::Asteroid(const Asteroid& src)
{
	*this = src;
}

Asteroid::~Asteroid(void) {}

Asteroid&
Asteroid::operator=	(const Asteroid& rhs)
{
	(void)rhs;
	return (*this);
}

std::string
Asteroid::beMined(DeepCoreMiner* laser) const
{
	(void)laser;
	return ("Flavium");
}

std::string
Asteroid::beMined(StripMiner* laser) const
{
	(void)laser;
	return ("Dragonite");
}

std::string
Asteroid::getName(void) const
{
	return ("Asteroid");
}

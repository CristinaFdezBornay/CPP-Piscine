/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 02:30:47 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:33:03 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Comet.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

Comet::Comet(void) {}

Comet::Comet(const Comet& src)
{
	*this = src;
}

Comet::~Comet(void) {}

Comet&
Comet::operator=	(const Comet& rhs)
{
	(void)rhs;
	return (*this);
}

std::string
Comet::beMined(DeepCoreMiner* laser) const
{
	(void)laser;
	return ("Meium");
}

std::string
Comet::beMined(StripMiner* laser) const
{
	(void)laser;
	return ("Tartarite");
}

std::string
Comet::getName(void) const
{
	return ("Comet");
}

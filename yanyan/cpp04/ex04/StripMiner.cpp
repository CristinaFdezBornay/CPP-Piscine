/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 01:56:23 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:59:49 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner(void) {}

StripMiner::StripMiner(const StripMiner& src)
{
	*this = src;
}

StripMiner::~StripMiner(void) {}

StripMiner&
StripMiner::operator= (const StripMiner &rhs)
{
	(void)rhs;
	return (*this);
}

void
StripMiner::mine(IAsteroid* target)
{
	std::cout << "* strip mining ... got " << target->beMined(this) << " ! *" << std::endl;
}

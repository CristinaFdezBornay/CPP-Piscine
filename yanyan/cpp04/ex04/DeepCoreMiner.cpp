/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 01:56:23 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:36:53 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void) {}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner& src)
{
	*this = src;
}

DeepCoreMiner::~DeepCoreMiner(void) {}

DeepCoreMiner&
DeepCoreMiner::operator= (const DeepCoreMiner &rhs)
{
	(void)rhs;
	return (*this);
}

void
DeepCoreMiner::mine(IAsteroid* target)
{
	std::cout << "* mining deep ... got " << target->beMined(this) << " ! *" << std::endl;
}

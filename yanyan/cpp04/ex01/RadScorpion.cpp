/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:27:48 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/21 17:27:15 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(int hp, std::string const & type)
{
	this->m_HP = hp;
	this->m_type = type;
	this->m_born = "* click click click *";
	this->m_die = "* SPROTCH *";
	std::cout << this->m_born << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& old)
{
	this->m_HP = old.getHP();
	this->m_type = old.getType();
	this->m_born = "* click click click *";
	this->m_die = "* SPROTCH *";
	std::cout << this->m_born << std::endl;
}

RadScorpion&	RadScorpion::operator = (const RadScorpion& copy)
{
	this->m_type = copy.getType();
	this->m_HP = copy.getHP();
	this->m_born = "* click click click *";
	this->m_die = "* SPROTCH *";
	return (*this);
}

RadScorpion::~RadScorpion(void)
{
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 00:05:29 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/08 20:50:22 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	this->m_name = "John";
	std::cout << "A random victim called " << this->m_name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name)
{
	this->m_name = name;
	std::cout << "A random victim called " << this->m_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &copy) {
	this->m_name = copy.getName();
}

Victim& Victim::operator=(const Victim &copy)
{
	this->m_name = copy.getName();
	return (*this);
}

Victim::~Victim(void)
{
	std::cout << "The victim " << this->m_name << " died for no apparent reasons!" << std::endl;
}

std::string		Victim::getName(void) const
{
	return (this->m_name);
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->m_name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream &operator << (std::ostream &o, Victim const& elem)
{
	o << "I'm " << elem.getName() << " and I like otters!" << std::endl;
	return (o);
}

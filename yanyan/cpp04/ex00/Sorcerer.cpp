/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 23:50:02 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/08 20:50:03 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

//========== CONSTRUCT

Sorcerer::Sorcerer(std::string name, std::string title)
{
	m_name = name;
	m_title = title;
	std::cout << m_name << ", " << m_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy) {
	this->m_name = copy.getName();
	this->m_title = copy.getTitle();
}

Sorcerer& Sorcerer::operator=(const Sorcerer &copy)
{
	this->m_name = copy.getName();
	this->m_title = copy.getTitle();
	return (*this);
}

//========== DESTRUCT

Sorcerer::~Sorcerer(void)
{
	std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!" << std::endl;
}

//========== GETTER

std::string		Sorcerer::getName(void) const
{
	return (this->m_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->m_title);
}

//========== MEMBER

void			Sorcerer::polymorph(Victim const& elem) const
{
	elem.getPolymorphed();
}

//========== OPERATOR

std::ostream &operator << (std::ostream &o, Sorcerer const& elem)
{
	o << "I am " << elem.getName() << ", " << elem.getTitle() << ", and I like ponies!" << std::endl;
	return (o);
}

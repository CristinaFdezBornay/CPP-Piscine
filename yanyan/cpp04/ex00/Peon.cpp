/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 00:26:46 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/08 20:50:14 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	this->m_name = "John";
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name)
{
	this->m_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &copy) {
	this->m_name = copy.getName();
}

Peon& Peon::operator=(const Peon &copy)
{
	this->m_name = copy.getName();
	return (*this);
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->m_name << " was just polymorphed into a pink pony!" << std::endl;
}

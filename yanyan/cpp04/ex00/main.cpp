/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 00:01:22 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/08 20:37:44 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

class Looser : public Victim
{
	public:
		Looser(std::string name);
		virtual ~Looser(void);
		virtual void	getPolymorphed(void) const;
};

Looser::Looser(std::string name) : Victim(name)
{
	this->m_name = name;
	std::cout << "I'm a looser." << std::endl;
}

Looser::~Looser(void)
{
	std::cout << "The looser was loosed" << std::endl;
}

void	Looser::getPolymorphed(void) const
{
	std::cout << this->m_name << " has been turned into a winnner !" << std::endl;
}

int		main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Sorcerer patrick = robert;
	Sorcerer bruce(patrick);
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peon tom(joe);
	Peon jerry = joe;
	Looser ben("oops");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	patrick.polymorph(ben);
	bruce.polymorph(joe);
	robert.polymorph(tom);
	robert.polymorph(jerry);

	return 0;
}

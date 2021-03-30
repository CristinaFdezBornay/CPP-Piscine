/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:43:29 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:43:30 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {
    return;
}

HumanA::~HumanA( void ) {
    return;
}

std::string     HumanA::getName( void ) const {
    return this->_name;
}

Weapon          HumanA::getWeapon( void ) const {
    return this->_weapon;
}

void            HumanA::attack( void ) const {
    std::cout << this->getName() << " attacks with their " << this->getWeapon().getType() << "\n" << std::endl;
    return;
}
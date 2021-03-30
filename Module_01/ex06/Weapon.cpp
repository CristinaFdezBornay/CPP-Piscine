/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:43:45 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:43:45 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {
    return;
}

Weapon::Weapon( std::string type ) : _type(type) {
    return;
}

Weapon::~Weapon( void ) {
    return;
}

void                Weapon::setType( std::string type ) {
    this->_type = type;
    return;
}

const std::string   &Weapon::getType( void ) const {
    return this->_type;
}
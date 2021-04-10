/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:30:03 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/11 00:43:25 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
    return ;
}

Character::Character( std::string const & name ) {
    this->setName( name );
    return ;
}

Character::~Character( void ) {
    return;
}

void            Character::setName( std::string input ) {
    this->_name = input;
    return ;
}

std::string     Character::getName( void ) const {
    return this->_name;
}

void            Character::recoverAP( void )
void            Character::equip( AWeapon *weapon );
void            Character::attack( Enemy *enemy );
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:58:16 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/17 22:45:39 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void ) {
    return ;
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) : _name( name ), _apCost( apcost ), _damage( damage ) {
    return ;
}

AWeapon::AWeapon( AWeapon const & src ) {
    *this = src;
    return ;
}

AWeapon::~AWeapon( void ) {
    return ;
}

void            AWeapon::setName( std::string input ) {
    this->_name = input;
    return ;
}

void            AWeapon::setAPCost( int input ) {
    this->_apCost = input;
    return ;
}

void            AWeapon::setDamage( int input ) {
    this->_damage = input;
    return ;
}

std::string     AWeapon::getName() const {
    return this->_name;
}

int             AWeapon::getAPCost() const {
    return this->_apCost;
}

int             AWeapon::getDamage() const {
    return this->_damage;
}

AWeapon &       AWeapon::operator=( AWeapon const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    this->setName( rhs.getName() );
    this->setAPCost( rhs.getAPCost() );
    this->setDamage( rhs.getDamage() );
    return *this;
}

std::ostream &     operator<<( std::ostream & o, AWeapon const & src ) {
    o << src.getName() << " with " << src.getAPCost() << " AP Cost and " << src.getDamage() << std::endl;
    return o;
}

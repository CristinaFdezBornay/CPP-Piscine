/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:30:03 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/12 17:37:15 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
    return ;
}

Character::Character( std::string const & name ) : _name( name ), _actionPoints( 40 ) {
    return ;
}

Character::~Character( void ) {
    return;
}

void            Character::setName( std::string input ) {
    this->_name = input;
    return ;
}

void            Character::setActionPoints( int input ) {
    this->_actionPoints = input;
    return ;
}

void            Character::setWeapon( AWeapon *input ) {
    this->_weapon = input;
    return ;
}

std::string     Character::getName( void ) const {
    return this->_name;
}

int             Character::getActionPoints( void ) const {
    return this->_actionPoints;
}

AWeapon         *Character::getWeapon( void ) const {
    return this->_weapon;
}

void            Character::recoverAP( void ) {
    this->setActionPoints( this->getActionPoints() + 10);
    if ( this->getActionPoints() > 40 )
        this->setActionPoints( 40 );
    return ;
}
void            Character::equip( AWeapon *weapon ) {
    // if ( this->getActionPoints() - weapon->getAPCost() < 0 )
        // return ;
    this->setWeapon( weapon );
    std::cout << this->getWeapon() << std::endl;
    // this->setActionPoints( this->getActionPoints() - weapon->getAPCost() );
    return ;
}
void            Character::attack( Enemy *enemy ) {
    if ( !this->getWeapon() or this->getActionPoints() < 0 )
        return ;
    std::cout << this->getName() << " attacks " << enemy->getType() << " with a " << this->getWeapon()->getName() << std::endl;
    this->getWeapon()->attack();
    enemy->takeDamage( this->getWeapon()->getDamage() );
    if ( enemy->getHitPoints() < 0 )
        std::cout << "ENEMY DELETE -> not implemented" << std::endl;
        // delete enemy;
    return ;
}

// Character &     operator=( Character const & rhs );

std::ostream &     operator<<( std::ostream & o, Character const & src ) {
    if ( !src.getWeapon() )
        o << src.getName() << " has " << src.getActionPoints() << " AP and is unarmed" << std::endl;
    else
        o << src.getName() << " has " << src.getActionPoints() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
    return o;
}

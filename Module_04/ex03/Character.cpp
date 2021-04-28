/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:59:00 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/28 23:50:28 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
    return ;
}

Character::Character( std::string name ) {
    this->setName( name );
    return ;
}

Character::Character( Character const & src ) {
    *this = src;
    return ;
}

Character::~Character( void ) {
    return ;
}

void                    Character::setName( std::string const & input ) {
    this->_name = input;
    return ;
}

void                    Character::setMateria( AMateria **input ) {
    this->_materia = input;
    return ;
}

void                    Character::setNbrMateria( int input ) {
    this->_nbrMateria = input;
    return ;
}

std::string const &     Character::getName( void ) const {
    return this->_name;
}

AMateria                **Character::getMateria( void ) const {
    return this->_materia;
}

int                     Character::getNbrMateria( void ) const {
    return this->_nbrMateria;
}

void                    Character::equip( AMateria* input ) {
    if ( this->getNbrMateria() == 3 )
        return ;
    for (int i = 0; i < 4; ++i)
        if ( this->getMateria()[i] == NULL ) {
            this->getMateria()[i] = input;
            this->setNbrMateria( this->getNbrMateria() + 1 );
            return ;
        }
    return ;
}

void                    Character::unequip( int index ) {
    this->getMateria()[index] = NULL;
    return ;
}

void                    Character::use( int index, ICharacter& target ) {
    this->getMateria()[index]->use(target);
    return ;
}

Character &             Character::operator=( Character const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    return *this;
}

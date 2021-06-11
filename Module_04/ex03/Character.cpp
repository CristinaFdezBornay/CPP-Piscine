/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:59:00 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/11 12:10:41 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
    this->setNbrMateria( 0 );
    return ;
}

Character::Character( std::string name ) {
    this->setName( name );
    this->setNbrMateria( 0 );
    return ;
}

Character::Character( Character const & src ) {
    this->setName( src.getName() );
    this->setNbrMateria( 0 );
    for ( int i = 0; i < src.getNbrMateria(); ++i )
        this->setMateria( src.getMateria(i)->clone() );
    return ;
}

Character::~Character( void ) {
    for ( int i = 0; i < this->getNbrMateria(); ++i )
        delete this->getMateria(i);
    return ;
}

void                    Character::setName( std::string const & input ) {
    this->_name = input;
    return ;
}

void                    Character::setMateria( AMateria *input ) {
    this->_materias[this->getNbrMateria()] = input;
    return ;
}

void                    Character::setNbrMateria( int input ) {
    this->_nbrMateria = input;
    return ;
}

std::string const &     Character::getName( void ) const {
    return this->_name;
}

AMateria                *Character::getMateria( int index ) const {
    if ( index < 0 or index >= this->getNbrMateria() )
        return NULL;
    return this->_materias[ index ];
}

int                     Character::getNbrMateria( void ) const {
    return this->_nbrMateria;
}

void                    Character::equip( AMateria* input ) {
    if ( this->getNbrMateria() == 4 )
        return ;
    this->setMateria( input );
    this->setNbrMateria( this->getNbrMateria() + 1 );
    return ;
}

void                    Character::unequip( int index ) {
    if ( index < 0 or index >= this->getNbrMateria() )
        return ;
    this->_materias[ index ] = NULL;
    return ;
}

void                    Character::use( int index, ICharacter& target ) {
    if ( index < 0 or index >= this->getNbrMateria() )
        return ;
    this->getMateria(index)->use(target);
    return ;
}

Character &             Character::operator=( Character const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    this->setName( rhs.getName() );
    this->setNbrMateria( 0 );
    for ( int i = 0; i < rhs.getNbrMateria(); ++i )
        this->setMateria( rhs.getMateria(i)->clone() );
    return *this;
}

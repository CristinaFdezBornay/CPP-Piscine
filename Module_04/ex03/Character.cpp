/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:59:00 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/17 16:20:09 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
    this->setNbrMateria( 0 );
    for ( int i = 0; i < 4; ++i )
        this->_materias[i] = NULL;
    return ;
}

Character::Character( std::string name ) {
    this->setName( name );
    this->setNbrMateria( 0 );
    for ( int i = 0; i < 4; ++i )
        this->_materias[i] = NULL;
    return ;
}

Character::Character( Character const & src ) {
    this->setName( src.getName() );
    this->setNbrMateria( src.getNbrMateria() );
    for ( int i = 0; i < 4; ++i )
        if ( src.getMateria(i) )
            this->_materias[i] = src.getMateria(i)->clone();
        else
            this->_materias[i] = NULL;
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
    if ( this->getNbrMateria() == 4 ) {
        std::cout << "Cannot set materia because the number of materia is already 4" << std::endl;
        return ;
    }
    for ( int i = 0; i < 4; ++i )
        if ( !this->_materias[i] ) {
            this->_materias[i] = input;
            break;
        }
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
    if ( index < 0 or index >= 4 )
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
    if ( index < 0 or index >= this->getNbrMateria() or this->getNbrMateria() == 0 )
        return ;
    this->_materias[ index ] = NULL;
    this->setNbrMateria( this->getNbrMateria() - 1);
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

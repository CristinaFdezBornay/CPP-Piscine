/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:51:19 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/28 23:11:11 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
    this->setXP( 0 );
    return ;
}

AMateria::AMateria( std::string const & type ) {
    this->setXP( 0 );
    this->setType( type );
    return ;
}

AMateria::AMateria( AMateria const & src ) {
    this->setXP( src.getXP() );
    this->setType( src.getType() );
    *this = src;
    return ;
}

AMateria::~AMateria( void ) {
    return ;
}

void                        AMateria::setType( std::string const &input ) {
    this->_type = input;
    return ;
}

void                        AMateria::setXP( unsigned int input ) {
    this->_xp = input;
    return ;
}

std::string const &         AMateria::getType( void ) const {
    return this->_type;
}

unsigned int                AMateria::getXP( void ) const {
    return this->_xp;
}

void                        AMateria::use( ICharacter& target ) {
    (void)target;
    this->setXP( this->getXP() + 10 );
    return ;
}

AMateria &                  AMateria::operator=( AMateria const & rhs ) {
    if ( this == &rhs )
        return *this;
    return *this;
}

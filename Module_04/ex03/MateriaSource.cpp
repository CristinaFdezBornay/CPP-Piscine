/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 22:51:35 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/11 12:18:59 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
    this->setNbrMateria( 0 );
    return ;
}

MateriaSource::MateriaSource( MateriaSource const & src ) {
    *this = src;
    return ;
}

MateriaSource::~MateriaSource( void ) {
    return ;
}

void            MateriaSource::setMateria( AMateria *materias ) {
    if ( this->getNbrMateria() == 4 )
        return ;
    this->_materias[this->getNbrMateria()] = materias;
    this->setNbrMateria( this->getNbrMateria() + 1 );
    return ;
}

void            MateriaSource::setNbrMateria( int input ) {
    this->_nbrMateria = input;
    return ;
}

AMateria        *MateriaSource::getMateria( int index ) const {
    if ( index < 0 or index > this->getNbrMateria() )
        return NULL;
    return this->_materias[ index ];
}

int             MateriaSource::getNbrMateria( void ) const {
    return this->_nbrMateria;
}

void            MateriaSource::learnMateria( AMateria* input ) {
    this->setMateria( input );
    return ;
}

AMateria *      MateriaSource::createMateria( std::string const & type ) {
    for ( int i = 0; i < 4; ++i ) {
        if ( this->getMateria(i)->getType() == type )
            return this->getMateria(i)->clone();
    }
    return NULL;
}

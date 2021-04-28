/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 22:51:35 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/28 23:33:27 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
    this->setMaterias( NULL );
    return ;
}

MateriaSource::MateriaSource( MateriaSource const & src ) {
    *this = src;
    return ;
}

MateriaSource::~MateriaSource( void ) {
    return ;
}

void            MateriaSource::setMaterias( AMateria **materias ) {
    this->_materias = materias;
    return ;
}

AMateria        **MateriaSource::getMaterias( void ) const {
    return this->_materias;
}

void            MateriaSource::learnMateria( AMateria* input ) {
    *(this->getMaterias()) = input;
}

AMateria *      MateriaSource::createMateria( std::string const & type ) {
    for ( int i = 0; i < 4; ++i ) {
        if ( this->getMaterias()[i]->getType() == type )
            return this->getMaterias()[i];
    }
    return NULL;
}
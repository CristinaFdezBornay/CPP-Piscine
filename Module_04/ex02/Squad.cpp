/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:45:44 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/11 11:29:19 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void ) {
    this->setMarines(NULL);
    this->setCount(0);
    return ;
}

Squad::~Squad( void ) {
    for ( int i = 0; i < this->getCount(); ++i )
        delete this->getUnit( i );
    delete [] this->getMarines();
    std::cout << "== Squad Dead ==" << std::endl;
    return ;
}

Squad::Squad( Squad const & rhs ) {
    for ( int i = 0; i < rhs.getCount(); ++i )
        this->push( rhs.getUnit(i)->clone() );
    return ;
}

void                    Squad::setCount( int input ) {
    this->_count = input;
    return ;
}

void                    Squad::setMarines( ISpaceMarine** input ) {
    this->_marines = input;
    return ;
}

int                     Squad::getCount( void ) const {
    return this->_count;
}

ISpaceMarine**          Squad::getMarines( void ) const {
    return this->_marines;
}

ISpaceMarine*           Squad::getUnit( int index ) const {
    if ( index >= this->getCount() or index < 0 )
        return NULL;
    return this->getMarines()[index];
}

int                     Squad::push( ISpaceMarine *src ) {
    ISpaceMarine        **new_squad;

    if ( src == NULL )
        return 0;
    for ( int i = 0; i < this->getCount(); ++i )
        if ( this->getUnit(i) == src )
            return this->getCount();
    if ( !( new_squad = new ISpaceMarine*[this->getCount() + 1] ) )
        return -1;
    for ( int i = 0; i < this->getCount(); ++i )
        new_squad[i] = this->getUnit(i);
    new_squad[ this->getCount() ] = src;
    delete [] this->getMarines();
    this->setMarines( new_squad );
    this->setCount( this->getCount() + 1 );
    return this->getCount();
}

Squad &                 Squad::operator=( Squad const & rhs ) {
    ISpaceMarine        **new_squad;

    if ( this == &rhs )
        return *this;
    if ( !( new_squad = new ISpaceMarine*[rhs.getCount()] ) )
        return *this;
    for ( int i = 0; i < rhs.getCount(); ++i )
        new_squad[i] = rhs.getUnit(i)->clone();
    for ( int i = 0; i < this->getCount(); ++i )
        delete this->getUnit( i );
    delete [] this->getMarines();
    this->setMarines( new_squad );
    this->setCount( rhs.getCount() );
    return *this;
}

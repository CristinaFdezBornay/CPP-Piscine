/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:45:44 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 14:47:12 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void ) {
    Squad::setMarines(NULL);
    Squad::setCount(0);
    return ;
}

Squad::~Squad( void ) {
    for ( int i = 0; i < Squad::getCount(); ++i )
        delete Squad::getUnit( i );
    delete [] Squad::getMarines();
    return ;
}

void                    Squad::setCount( int input ) {
    Squad::_count = input;
    return ;
}

void                    Squad::setMarines( ISpaceMarine** input ) {
    Squad::_marines = input;
    return ;
}

int                     Squad::getCount( void ) const {
    return Squad::_count;
}

ISpaceMarine**          Squad::getMarines( void ) const {
    return Squad::_marines;
}

ISpaceMarine*           Squad::getUnit( int index ) const {
    if ( index >= Squad::getCount() or index < 0)
        return NULL;
    return Squad::getMarines()[index];
}

int                     Squad::push( ISpaceMarine *src ) {
    ISpaceMarine        **new_squad;

    if ( src == NULL )
        return 0;
    for ( int i = 0; i < Squad::getCount(); ++i ) {
        if ( Squad::getUnit( i ) == src )
            return Squad::getCount();
    }
    if ( !( new_squad = new ISpaceMarine*[Squad::getCount() + 1] ) )
        return -1;
    for ( int i = 0; i < Squad::getCount(); ++i ) {
        new_squad[i] = Squad::getMarines()[i];
    }
    new_squad[ Squad::getCount() ] = src;
    delete [] Squad::getMarines();
    Squad::setMarines( new_squad );
    Squad::setCount( Squad::getCount() + 1 );
    return Squad::getCount();
}

Squad &                 Squad::operator=( Squad const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    return *this;
}

int                     Squad::_count = 0;

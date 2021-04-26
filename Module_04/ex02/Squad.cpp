/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:45:44 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/23 00:45:19 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void ) {
    return ;
}

Squad::~Squad( void ) {
    return ;
}

void                    Squad::setCount( int input ) {
    Squad::_count = input;
    return ;
}

int                     Squad::getCount( void ) const {
    return Squad::_count;
}

ISpaceMarine*           Squad::getUnit( int index ) const {
    std::cout << "Squad::getUnit : " << index << std::endl;
    return NULL;
}

int                     Squad::push( ISpaceMarine *src ) {
    ( void )src;
    std::cout << "Squad::push" << std::endl;
    return 0;
}

Squad &                 Squad::operator=( Squad const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    // this->setType( rhs.getType() );
    // this->setHitPoints( rhs.getHitPoints() );
    return *this;
}

int                     Squad::_count = 0;

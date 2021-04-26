/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:59:00 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/26 21:13:34 by crfernan         ###   ########.fr       */
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

std::string const &     Character::getName( void ) const {
    return this->_name;
}

void                    Character::equip( AMateria* m ) {
    (void)m;
    std::cout << "equip" << std::endl;
    return ;
}

void                    Character::unequip( int idx ) {
    (void)idx;
    std::cout << "unequip" << std::endl;
    return ;
}

void                    Character::use( int idx, ICharacter& target ) {
    (void)idx;
    (void)target;
    std::cout << "use" << std::endl;
    return ;
}

Character &             Character::operator=( AMateria const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    return *this;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:23:17 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/08 23:23:18 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( void ) {
    return ;
}

Victim::~Victim( void ) {
    std::cout << "Victim " << this->getName() << " just died for no apparent reason !" << std::endl;
    return ;
}

Victim::Victim( std::string name ) {
    this->setName( name );
    std::cout << "Some random victim called " << this->getName() << " just appeared !" << std::endl;
    return ;
}

Victim::Victim( Victim const & src ) {
    *this = src;
    std::cout << this->getName() << " is born by copy !" << std::endl;
    return ;
}

void            Victim::setName( std::string input ) {
    this->_name = input;
    return ;
}

std::string     Victim::getName( void ) const {
    return this->_name;
}

Victim &        Victim::operator=( Victim const & rhs ) {
    std::cout << "Assignation operator called" << std::endl;
    if ( this == &rhs ) 
        return *this;
    this->setName( rhs.getName() );
    return *this;
}

void            Victim::getPolymorphed( void ) const {
    std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
    return ;
}

std::ostream &  operator<<( std::ostream & o, Victim const & src ) {
    o << "I am " << src.getName() << ", and I like otters !" << std::endl;
    return o;
}
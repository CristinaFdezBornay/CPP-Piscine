/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:22:37 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/08 23:22:39 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ) {
    return ;
}

Sorcerer::~Sorcerer( void ) {
    std::cout << this->getName() << ", " << this->getTitle() << ", is dead. Consequences will never be the same !"<< std::endl;
    return ;
}

Sorcerer::Sorcerer( std::string name, std::string title ) {
    this->setName( name );
    this->setTitle( title );
    std::cout << this->getName() << ", " << this->getTitle() << ", is born !" << std::endl;
    return ;
}

Sorcerer::Sorcerer( Sorcerer const & src ) {
    *this = src;
    std::cout << this->getName() << " is born by copy !" << std::endl;
    return ;
}

void            Sorcerer::setName( std::string input ) {
    this->_name = input;
    return ;
}

void            Sorcerer::setTitle( std::string input ) {
    this->_title = input;
    return ;
}

std::string     Sorcerer::getName( void ) const {
    return this->_name;
}

std::string     Sorcerer::getTitle( void ) const {
    return this->_title;
}

Sorcerer &      Sorcerer::operator=( Sorcerer const & rhs ) {
    std::cout << "Assignation operator called" << std::endl;
    if ( this == &rhs ) 
        return *this;
    this->setName( rhs.getName() );
    this->setTitle( rhs.getTitle() );
    return *this;
}

std::ostream &  operator<<( std::ostream & o, Sorcerer const & src ) {
    o << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}

void            Sorcerer::polymorph( Victim const & rhs ) const {
    rhs.getPolymorphed();
    return ;
}

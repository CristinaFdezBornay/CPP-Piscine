/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:29:45 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/01 00:00:20 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
    std::cout << "Default constructor" << std::endl;
    return ;
}

FragTrap::~FragTrap( void ) {
    std::cout << "Destructor" << std::endl;
    return ;
}

FragTrap::FragTrap( std::string name ) : _name( name ) {
    std::cout << "String constructor: " << this->getName() << std::endl;
    return ;
}

FragTrap::FragTrap( FragTrap const & src ) {
    std::cout << "Copy constructor" << std::endl;
    *this = src;
    return ;
}

void                FragTrap::setName( std::string input ) {
    this->_name = input;
    return ;
}

void                FragTrap::setLevel( int input ) {
    this->_level = input;
    return ;
}

void                FragTrap::setHitPoints( int input ) {
    this->_hitPoints = input;
    return ;
}

void                FragTrap::setEnerygyPoints( int input ) {
    this->_energyPoints = input;
    return ;
}

void                FragTrap::setMaxEnerygyPoints( int input ) {
    this->_maxEnergyPoints = input;
    return ;
}

void                FragTrap::setMeleeAtackDamage( int input ) {
    this->_meleeAtackDamage = input;
    return ;
}

void                FragTrap::setRangedAtackDamage( int input ) {
    this->_rangedAtackDamage = input;
    return ;
}

void                FragTrap::setArmorAtackDamage( int input ) {
    this->_armorAtackDamage = input;
    return ;
}

std::string         FragTrap::getName( void ) const {
    return this->_name;
}

int                 FragTrap::getLevel( void ) const {
    return this->_level;
}

int                 FragTrap::getHitPoints( void ) const {
    return this->_hitPoints;
}

int                 FragTrap::getEnerygyPoints( void ) const {
    return this->_energyPoints;
}

int                 FragTrap::getMaxEnerygyPoints( void ) const {
    return this->_maxEnergyPoints;
}

int                 FragTrap::getMeleeAtackDamage( void ) const {
    return this->_meleeAtackDamage;
}

int                 FragTrap::getRangedAtackDamage( void ) const {
    return this->_rangedAtackDamage;
}

int                 FragTrap::getArmorAtackDamage( void ) const {
    return this->_armorAtackDamage;
}

FragTrap &          FragTrap::operator=( FragTrap const & rhs ) {
    std::cout << "Assignation operator called" << std::endl;
    if ( this != &rhs )
        this->setName( rhs.getName() );
    return *this;
}

// void                FragTrap::rangedAttack( std::string const & target ) {
//     return ;
// }

// void                FragTrap::meleeAttack( std::string const & target ) {
//     return ;
// }

// void                FragTrap::vaulthunter_dot_exe( std::string const & target ) {
//     return ;
// }

// void                FragTrap::takeDamage( unsigned int amount ) {
//     return ;
// }

// void                FragTrap::beRepaired( unsigned int amount ) {
//     return ;
// }

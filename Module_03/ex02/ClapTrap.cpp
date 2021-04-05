/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:01:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 19:34:59 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
    std::cout << "CL4P-TP Default constructor" << std::endl;
    return ;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "💥 💥 CL4P-TP OHH NOOOO " << this->getName() << " DIED..."<< std::endl;
    return ;
}

ClapTrap::ClapTrap( std::string name ) {
    this->setName( name );
    this->setLevel( 1 );
    this->setMaxHitPoints( 100 );
    this->setHitPoints( 100 );
    std::cout << "😈 😈 A baby CL4P-TP " << this->getName() << " is born by string!!" << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
    *this = src;
    std::cout << "😈 😈 A baby CL4P-TP " << this->getName() << " is born by copy!!" << std::endl;
    return ;
}

void                ClapTrap::setName( std::string input ) {
    this->_name = input;
    return ;
}

void                ClapTrap::setLevel( int input ) {
    this->_level = input;
    return ;
}

void                ClapTrap::setHitPoints( int input ) {
    this->_hitPoints = input;
    if ( this->getHitPoints() < 0 )
        this->setHitPoints( 0 );
    if ( this->getHitPoints() > this->getMaxHitPoints() )
        this->setHitPoints( this->getMaxHitPoints() );
    return ;
}

void                ClapTrap::setMaxHitPoints( int input ) {
    this->_maxHitPoints = input;
    return ;
}

void                ClapTrap::setEnergyPoints( int input ) {
    this->_energyPoints = input;
    if ( this->getEnergyPoints() > this->getMaxEnergyPoints() )
        this->setEnergyPoints( this->getMaxEnergyPoints() );
    return ;
}

void                ClapTrap::setMaxEnergyPoints( int input ) {
    this->_maxEnergyPoints = input;
    return ;
}

void                ClapTrap::setMeleeAttackDamage( int input ) {
    this->_meleeAttackDamage = input;
    return ;
}

void                ClapTrap::setRangedAttackDamage( int input ) {
    this->_rangedAttackDamage = input;
    return ;
}

void                ClapTrap::setArmorDamageReduction( int input ) {
    this->_armorDamageReduction = input;
    return ;
}

std::string         ClapTrap::getName( void ) const {
    return this->_name;
}

int                 ClapTrap::getLevel( void ) const {
    return this->_level;
}

int                 ClapTrap::getHitPoints( void ) const {
    return this->_hitPoints;
}

int                 ClapTrap::getMaxHitPoints( void ) const {
    return this->_maxHitPoints;
}

int                 ClapTrap::getEnergyPoints( void ) const {
    return this->_energyPoints;
}

int                 ClapTrap::getMaxEnergyPoints( void ) const {
    return this->_maxEnergyPoints;
}

int                 ClapTrap::getMeleeAttackDamage( void ) const {
    return this->_meleeAttackDamage;
}

int                 ClapTrap::getRangedAttackDamage( void ) const {
    return this->_rangedAttackDamage;
}

int                 ClapTrap::getArmorDamageReduction( void ) const {
    return this->_armorDamageReduction;
}

ClapTrap &          ClapTrap::operator=( ClapTrap const & rhs ) {
    std::cout << "CL4P-TP Assignation operator called" << std::endl;
    if ( this == &rhs ) 
        return *this;
    this->setName( rhs.getName() );
    this->setHitPoints(rhs.getHitPoints());
    this->setMaxEnergyPoints(rhs.getMaxEnergyPoints());
    this->setEnergyPoints(rhs.getEnergyPoints());
    this->setMaxHitPoints(rhs.getMaxHitPoints());
    this->setLevel(rhs.getLevel());
    this->setName(rhs.getName());
    this->setMeleeAttackDamage(rhs.getMeleeAttackDamage());
    this->setRangedAttackDamage(rhs.getRangedAttackDamage());
    this->setArmorDamageReduction(rhs.getArmorDamageReduction());
    return *this;
}

std::ostream &     operator<<( std::ostream & o, ClapTrap const & src ) {

    o << "CL4P-TP Name           : " << src.getName() << std::endl;
    o << "Hit Points             : " << src.getHitPoints() << std::endl;
    o << "Max Hit Points         : " << src.getMaxHitPoints() << std::endl;
    o << "Energy Points          : " << src.getEnergyPoints() << std::endl;
    o << "Max Energy Points      : " << src.getMaxEnergyPoints() << std::endl;
    o << "Level                  : " << src.getLevel() << std::endl;
    o << "Melee Attack Damage    : " << src.getMeleeAttackDamage() << std::endl;
    o << "Ranged Attack Damage   : " << src.getRangedAttackDamage() << std::endl;
    o << "Armor Damage Reduction : " << src.getArmorDamageReduction() << std::endl;
    return o;
}

void                ClapTrap::rangedAttack( std::string const & target ) {
    std::cout << "🧨 🧨 CL4P-TP " << this->getName() <<" attacks " << target << " at range, causing " << this->getRangedAttackDamage() << " points of damage!" << std::endl;
    return ;
}

void                ClapTrap::meleeAttack( std::string const & target ) {
    std::cout <<  "💣 💣 CL4P-TP " << this->getName() <<" attacks " << target << " at melee, causing " << this->getMeleeAttackDamage() << " points of damage!" << std::endl;
    return ;
}

void                ClapTrap::takeDamage( unsigned int amount ) {
    int             real_harm;

    real_harm = amount - this->getArmorDamageReduction();
    this->setHitPoints( this->getHitPoints() - real_harm );
    std::cout << "💀 💀 CL4P-TP " << this->getName() <<" took a damage of " << amount << " [ Hits Points Remaining = " << this->getHitPoints() << " ]" << std::endl;
    return ;
}

void                ClapTrap::beRepaired( unsigned int amount ) {
    this->setHitPoints( this->getHitPoints() + amount );
    this->setEnergyPoints( this->getEnergyPoints() + amount );
    std::cout << "🥰 🥰 CL4P-TP " << this->getName() <<" has been repaired [ Hits Points = " << this->getHitPoints() << " ][ Energy Points = " << this->getEnergyPoints() << " ]" <<  std::endl;
    return ;
}

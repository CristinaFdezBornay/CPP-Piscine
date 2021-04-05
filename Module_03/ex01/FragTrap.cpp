/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:29:45 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 17:06:16 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
    std::cout << "FR4G-TP Default Constructor" << std::endl;
    return ;
}

FragTrap::~FragTrap( void ) {
    std::cout << "💥 💥 FR4G-TP OHH NOOOO " << this->getName() << " DIED..."<< std::endl;
    return ;
}

FragTrap::FragTrap( std::string name ) {
    this->setName( name );
    this->setLevel( 1 );
    this->setMaxHitPoints( 100 );
    this->setHitPoints( 100 );
    this->setMaxEnergyPoints( 100 );
    this->setEnergyPoints( 100 );
    this->setMeleeAttackDamage( 30 );
    this->setRangedAttackDamage( 20 );
    this->setArmorDamageReduction( 5 );
    std::cout << "😈 😈 FR4G-TP " << this->getName() << " is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

FragTrap::FragTrap( FragTrap const & src ) {
    *this = src;
    std::cout << "😈 😈 FR4G-TP " << this->getName() << " has been created by copy and is ready to figggghhhhttttTTT !!!!!" << std::endl;
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
    if ( this->getHitPoints() < 0 )
        this->setHitPoints( 0 );
    if ( this->getHitPoints() > this->getMaxHitPoints() )
        this->setHitPoints( this->getMaxHitPoints() );
    return ;
}

void                FragTrap::setMaxHitPoints( int input ) {
    this->_maxHitPoints = input;
    return ;
}

void                FragTrap::setEnergyPoints( int input ) {
    this->_energyPoints = input;
    if ( this->getEnergyPoints() > this->getMaxEnergyPoints() )
        this->setEnergyPoints( this->getMaxEnergyPoints() );
    return ;
}

void                FragTrap::setMaxEnergyPoints( int input ) {
    this->_maxEnergyPoints = input;
    return ;
}

void                FragTrap::setMeleeAttackDamage( int input ) {
    this->_meleeAttackDamage = input;
    return ;
}

void                FragTrap::setRangedAttackDamage( int input ) {
    this->_rangedAttackDamage = input;
    return ;
}

void                FragTrap::setArmorDamageReduction( int input ) {
    this->_armorDamageReduction = input;
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

int                 FragTrap::getMaxHitPoints( void ) const {
    return this->_maxHitPoints;
}

int                 FragTrap::getEnergyPoints( void ) const {
    return this->_energyPoints;
}

int                 FragTrap::getMaxEnergyPoints( void ) const {
    return this->_maxEnergyPoints;
}

int                 FragTrap::getMeleeAttackDamage( void ) const {
    return this->_meleeAttackDamage;
}

int                 FragTrap::getRangedAttackDamage( void ) const {
    return this->_rangedAttackDamage;
}

int                 FragTrap::getArmorDamageReduction( void ) const {
    return this->_armorDamageReduction;
}

FragTrap &          FragTrap::operator=( FragTrap const & rhs ) {
    std::cout << "FR4G-TP Assignation operator called" << std::endl;
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

std::ostream &     operator<<( std::ostream & o, FragTrap const & src ) {

    o << "FR4G-TP Name           : " << src.getName() << std::endl;
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

void                FragTrap::rangedAttack( std::string const & target ) {
    std::cout << "🧨 🧨 FR4G-TP " << this->getName() <<" attacks " << target << " at range, causing " << this->getRangedAttackDamage() << " points of damage!" << std::endl;
    return ;
}

void                FragTrap::meleeAttack( std::string const & target ) {
    std::cout <<  "💣 💣 FR4G-TP " << this->getName() <<" attacks " << target << " at melee, causing " << this->getMeleeAttackDamage() << " points of damage!" << std::endl;
    return ;
}

void                FragTrap::vaulthunter_dot_exe( std::string const & target ) {
    int             cost_of_attacking_randomly = 25;
    std::string     random_attacks[] = {
        "banana peel",
        "not funny jokes",
        "2nd degree opinions",
        "indifference",
        "i really do not want to think about random robot attacks sorry"
    };

    if (this->getEnergyPoints() < cost_of_attacking_randomly ) {
        std::cout <<  "🔪 🔪 FR4G-TP " << this->getName() <<" cannot attack " << target << " coz they have " << this->getEnergyPoints() << " energy pointss... " << std::endl;
        return ;
    }
    this->setEnergyPoints( this->getEnergyPoints() - cost_of_attacking_randomly );
    std::cout <<  "🔪 🔪 FR4G-TP " << this->getName() <<" attacks " << target << " with their " << random_attacks[ rand() % 5 ] << " randomlyyyyy !!!!" << std::endl;
    return ;
}

void                FragTrap::takeDamage( unsigned int amount ) {
    int             real_harm;

    real_harm = amount - this->getArmorDamageReduction();
    this->setHitPoints( this->getHitPoints() - real_harm );
    std::cout << "💀 💀 FR4G-TP " << this->getName() <<" took a damage of " << amount << " [ Hits Points Remaining = " << this->getHitPoints() << " ]" << std::endl;
    return ;
}

void                FragTrap::beRepaired( unsigned int amount ) {
    this->setHitPoints( this->getHitPoints() + amount );
    this->setEnergyPoints( this->getEnergyPoints() + amount );
    std::cout << "🥰 🥰 FR4G-TP " << this->getName() <<" has been repaired [ Hits Points = " << this->getHitPoints() << " ][ Energy Points = " << this->getEnergyPoints() << " ]" <<  std::endl;
    return ;
}

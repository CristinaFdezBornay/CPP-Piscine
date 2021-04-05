/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:01:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 17:14:33 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    std::cout << "SC4V-TP Default constructor" << std::endl;
    return ;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "💥 💥 SC4V-TP OHH NOOOO " << this->getName() << " DIED..."<< std::endl;
    return ;
}

ScavTrap::ScavTrap( std::string name ) {
    this->setName( name );
    this->setLevel( 1 );
    this->setMaxHitPoints( 100 );
    this->setHitPoints( 100 );
    this->setMaxEnergyPoints( 50 );
    this->setEnergyPoints( 50 );
    this->setMeleeAttackDamage( 20 );
    this->setRangedAttackDamage( 15 );
    this->setArmorDamageReduction( 3 );
    std::cout << "😈 😈 SC4V-TP " << this->getName() << " is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
    *this = src;
    std::cout << "😈 😈 SC4V-TP " << this->getName() << " has been created by copy and is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

void                ScavTrap::setName( std::string input ) {
    this->_name = input;
    return ;
}

void                ScavTrap::setLevel( int input ) {
    this->_level = input;
    return ;
}

void                ScavTrap::setHitPoints( int input ) {
    this->_hitPoints = input;
    if ( this->getHitPoints() < 0 )
        this->setHitPoints( 0 );
    if ( this->getHitPoints() > this->getMaxHitPoints() )
        this->setHitPoints( this->getMaxHitPoints() );
    return ;
}

void                ScavTrap::setMaxHitPoints( int input ) {
    this->_maxHitPoints = input;
    return ;
}

void                ScavTrap::setEnergyPoints( int input ) {
    this->_energyPoints = input;
    if ( this->getEnergyPoints() > this->getMaxEnergyPoints() )
        this->setEnergyPoints( this->getMaxEnergyPoints() );
    return ;
}

void                ScavTrap::setMaxEnergyPoints( int input ) {
    this->_maxEnergyPoints = input;
    return ;
}

void                ScavTrap::setMeleeAttackDamage( int input ) {
    this->_meleeAttackDamage = input;
    return ;
}

void                ScavTrap::setRangedAttackDamage( int input ) {
    this->_rangedAttackDamage = input;
    return ;
}

void                ScavTrap::setArmorDamageReduction( int input ) {
    this->_armorDamageReduction = input;
    return ;
}

std::string         ScavTrap::getName( void ) const {
    return this->_name;
}

int                 ScavTrap::getLevel( void ) const {
    return this->_level;
}

int                 ScavTrap::getHitPoints( void ) const {
    return this->_hitPoints;
}

int                 ScavTrap::getMaxHitPoints( void ) const {
    return this->_maxHitPoints;
}

int                 ScavTrap::getEnergyPoints( void ) const {
    return this->_energyPoints;
}

int                 ScavTrap::getMaxEnergyPoints( void ) const {
    return this->_maxEnergyPoints;
}

int                 ScavTrap::getMeleeAttackDamage( void ) const {
    return this->_meleeAttackDamage;
}

int                 ScavTrap::getRangedAttackDamage( void ) const {
    return this->_rangedAttackDamage;
}

int                 ScavTrap::getArmorDamageReduction( void ) const {
    return this->_armorDamageReduction;
}

ScavTrap &          ScavTrap::operator=( ScavTrap const & rhs ) {
    std::cout << "SC4V-TP Assignation operator called" << std::endl;
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

std::ostream &     operator<<( std::ostream & o, ScavTrap const & src ) {

    o << "SC4V-TP Name           : " << src.getName() << std::endl;
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

void                ScavTrap::rangedAttack( std::string const & target ) {
    std::cout << "🧨 🧨 SC4V-TP " << this->getName() <<" attacks " << target << " at range, causing " << this->getRangedAttackDamage() << " points of damage!" << std::endl;
    return ;
}

void                ScavTrap::meleeAttack( std::string const & target ) {
    std::cout <<  "💣 💣 SC4V-TP " << this->getName() <<" attacks " << target << " at melee, causing " << this->getMeleeAttackDamage() << " points of damage!" << std::endl;
    return ;
}

void                ScavTrap::challengeNewcomer( std::string const & target ) {
    int             cost_of_attacking_randomly = 25;
    std::string     random_challenges[] = {
        "dance Macarena",
        "touch your nose with your tongue",
        "say \"el peRRo de san Roque no tiene Rabo porque Ramon Ramirez se lo ha cortado\"",
        "move one hand up and down and the other one in circles",
        "i really do not want to think about random robot challenges sorry"
    };

    if (this->getEnergyPoints() < cost_of_attacking_randomly ) {
        std::cout <<  "🔪 🔪 SC4V-TP " << this->getName() <<" cannot force " << target << " to " << random_challenges[ rand() % 5 ] << " coz they have " << this->getEnergyPoints() << " energy pointss... " << std::endl;
        return ;
    }
    this->setEnergyPoints( this->getEnergyPoints() - cost_of_attacking_randomly );
    std::cout <<  "🔪 🔪 SC4V-TP " << this->getName() <<" forces " << target << " to " << random_challenges[ rand() % 5 ] << " vvvery randomlyyyyy !!!!" << std::endl;
    return ;
}

void                ScavTrap::takeDamage( unsigned int amount ) {
    int             real_harm;

    real_harm = amount - this->getArmorDamageReduction();
    this->setHitPoints( this->getHitPoints() - real_harm );
    std::cout << "💀 💀 SC4V-TP " << this->getName() <<" took a damage of " << amount << " [ Hits Points Remaining = " << this->getHitPoints() << " ]" << std::endl;
    return ;
}

void                ScavTrap::beRepaired( unsigned int amount ) {
    this->setHitPoints( this->getHitPoints() + amount );
    this->setEnergyPoints( this->getEnergyPoints() + amount );
    std::cout << "🥰 🥰 SC4V-TP " << this->getName() <<" has been repaired [ Hits Points = " << this->getHitPoints() << " ][ Energy Points = " << this->getEnergyPoints() << " ]" <<  std::endl;
    return ;
}

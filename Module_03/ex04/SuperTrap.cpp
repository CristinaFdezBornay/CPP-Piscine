/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 23:50:41 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/07 01:06:05 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"


SuperTrap::SuperTrap( void ) : ClapTrap( ), FragTrap( ), NinjaTrap( ) {
    std::cout << "SUPR-TP Default constructor" << std::endl;
    return ;
}

SuperTrap::~SuperTrap( void ) {
    std::cout << "💥 💥 SUPR-TP OHH NOOOO DIED..."<< std::endl;
    return ;
}

SuperTrap::SuperTrap( std::string name ) :  FragTrap( name ), NinjaTrap( name ) {
    this->setName( name );
    this->setHitPoints( this->FragTrap::getHitPoints() );
    this->setMaxHitPoints( this->FragTrap::getMaxHitPoints() );
    this->setEnergyPoints( this->NinjaTrap::getEnergyPoints() );
    this->setMaxEnergyPoints( this->NinjaTrap::getMaxEnergyPoints() );
    this->setLevel( 1 );
    this->setMeleeAttackDamage( this->NinjaTrap::getMeleeAttackDamage() );
    this->setRangedAttackDamage( this->FragTrap::getRangedAttackDamage() );
    this->setArmorDamageReduction( this->FragTrap::getArmorDamageReduction() );
    std::cout << "😈 😈 SC4V-TP " << this->getName() << " is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : FragTrap( src ), NinjaTrap( src ) {
    *this = src;
    std::cout << "😈 😈 SC4V-TP " << this->getName() << " has been created by copy and is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

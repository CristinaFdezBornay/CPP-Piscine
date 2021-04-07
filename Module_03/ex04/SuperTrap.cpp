/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 23:50:41 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/07 23:47:34 by crfernan         ###   ########.fr       */
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

SuperTrap::SuperTrap( std::string name ) {
    FragTrap    fragTrap( name );
    NinjaTrap   ninjaTrap( name );

    this->setName( name );
    this->setHitPoints( fragTrap.getHitPoints() );
    this->setMaxHitPoints( fragTrap.getMaxHitPoints() );
    this->setEnergyPoints( ninjaTrap.getEnergyPoints() );
    this->setMaxEnergyPoints( ninjaTrap.getMaxEnergyPoints() );
    this->setLevel( 1 );
    this->setMeleeAttackDamage( ninjaTrap.getMeleeAttackDamage() );
    this->setRangedAttackDamage( fragTrap.getRangedAttackDamage() );
    this->setArmorDamageReduction( fragTrap.getArmorDamageReduction() );
    std::cout << "😈 😈 SUPR-TP " << this->getName() << " is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : FragTrap( src ), NinjaTrap( src ) {
    *this = src;
    std::cout << "😈 😈 SUPR-TP " << this->getName() << " has been created by copy and is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

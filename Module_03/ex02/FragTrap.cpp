/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:29:45 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 19:39:43 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap( ) {
    std::cout << "FR4G-TP Default Constructor" << std::endl;
    return ;
}

FragTrap::~FragTrap( void ) {
    std::cout << "💥 💥 FR4G-TP OHH NOOOO " << this->getName() << " DIED..."<< std::endl;
    return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ){
    this->setMaxEnergyPoints( 100 );
    this->setEnergyPoints( 100 );
    this->setMeleeAttackDamage( 30 );
    this->setRangedAttackDamage( 20 );
    this->setArmorDamageReduction( 5 );
    std::cout << "😈 😈 FR4G-TP " << this->getName() << " is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src ) {
    *this = src;
    std::cout << "😈 😈 FR4G-TP " << this->getName() << " has been created by copy and is ready to figggghhhhttttTTT !!!!!" << std::endl;
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

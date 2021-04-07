/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:29:45 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/07 23:38:24 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap( ) {
    std::cout << "FR4G-TP Default Constructor" << std::endl;
    return ;
}

FragTrap::~FragTrap( void ) {
    std::cout << "💥 💥 FR4G-TP OHH NOOOO " << this->getName() << " DIED..." << std::endl;
    return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name, 1, 100, 100, 100, 100, 30, 20, 5 ){
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
        "incredibly amount of coats"
    };

    if (this->getEnergyPoints() < cost_of_attacking_randomly ) {
        std::cout <<  "🔪 🔪 FR4G-TP " << this->getName() <<" cannot attack " << target << " coz she has " << this->getEnergyPoints() << " energy pointss... " << std::endl;
        return ;
    }
    this->setEnergyPoints( this->getEnergyPoints() - cost_of_attacking_randomly );
    std::cout <<  "🔪 🔪 FR4G-TP " << this->getName() <<" attacks " << target << " with her " << random_attacks[ rand() % 5 ] << " randomlyyyyy !!!!" << std::endl;
    return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:01:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 22:56:33 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( ) {
    std::cout << "SC4V-TP Default constructor" << std::endl;
    return ;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "💥 💥 SC4V-TP OHH NOOOO " << this->getName() << " DIED..."<< std::endl;
    return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name, 1, 100, 100, 50, 50, 20, 15, 3 ) {
    std::cout << "😈 😈 SC4V-TP " << this->getName() << " is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src ) {
    *this = src;
    std::cout << "😈 😈 SC4V-TP " << this->getName() << " has been created by copy and is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

void                ScavTrap::challengeNewcomer( std::string const & target ) {
    int             cost_of_attacking_randomly = 25;
    std::string     random_challenges[] = {
        "dance Macarena",
        "touch your nose with your tongue",
        "say \"el peRRo de san Roque no tiene Rabo porque Ramon Ramirez se lo ha cortado\"",
        "move one hand up and down and the other one in circles",
        "inability to cook"
    };

    if (this->getEnergyPoints() < cost_of_attacking_randomly ) {
        std::cout <<  "🔪 🔪 SC4V-TP " << this->getName() <<" cannot force " << target << " to " << random_challenges[ rand() % 5 ] << " coz she has " << this->getEnergyPoints() << " energy pointss... " << std::endl;
        return ;
    }
    this->setEnergyPoints( this->getEnergyPoints() - cost_of_attacking_randomly );
    std::cout <<  "🔪 🔪 SC4V-TP " << this->getName() <<" forces " << target << " to " << random_challenges[ rand() % 5 ] << " vvvery randomlyyyyy !!!!" << std::endl;
    return ;
}

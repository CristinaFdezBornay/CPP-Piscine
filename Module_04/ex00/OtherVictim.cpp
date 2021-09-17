/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OtherVictim.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:46:14 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/17 10:30:16 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OtherVictim.hpp"

OtherVictim::~OtherVictim( void ) {
    std::cout << "lol i'm dead xd" << std::endl;
    return ;
}

OtherVictim::OtherVictim( std::string name ) : Victim( name ) {
    std::cout << "BOOOOMMMMMMM..." << std::endl;
    return ;
}

void            OtherVictim::getPolymorphed( void ) const {
    std::cout << this->getName() << " has been turned into a cutie kitty !" << std::endl;
    return ;
}

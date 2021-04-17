/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dwarf.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:46:14 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/17 22:30:02 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dwarf.hpp"

Dwarf::~Dwarf( void ) {
    std::cout << "Dead but very rich..." << std::endl;
    return ;
}

Dwarf::Dwarf( std::string name ) : Victim( name ) {
    std::cout << "Minning bitcoin." << std::endl;
    return ;
}

void            Dwarf::getPolymorphed( void ) const {
    std::cout << this->getName() << " has been turned into a giant !" << std::endl;
    return ;
}

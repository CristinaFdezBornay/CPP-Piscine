/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:46:14 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/17 22:12:04 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::~Peon( void ) {
    std::cout << "Bleuark..." << std::endl;
    return ;
}

Peon::Peon( std::string name ) : Victim( name ) {
    std::cout << "Zog zog." << std::endl;
    return ;
}

void            Peon::getPolymorphed( void ) const {
    std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
    return ;
}

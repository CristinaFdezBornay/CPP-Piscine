/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:42:35 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:42:36 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ) {
    std::cout << "[ NEW ZOMBIE EVENT ]" << std::endl;
    return;
}

ZombieEvent::~ZombieEvent( void ) {
    std::cout << "[ ZOMBIE EVENT DIED ]" << std::endl;
    return;
}

void        ZombieEvent::setZombieType( void ) {
    std::string     input;

    std::cout << "What type of zombie are your zombies ?" << std::endl;
    std::getline( std::cin, input );
    this->_zombieType = input;
    std::cout << this->getZombieType() << " set as Zombie Type !" << std::endl;
    return;
}

std::string ZombieEvent::getZombieType( void ) const {
    return this->_zombieType;
}

Zombie      *ZombieEvent::newZombie( std::string name ) const {
    Zombie          *zombie = new Zombie( name, this->getZombieType() );
    return zombie;
}

Zombie      *ZombieEvent::randomChump( void ) const {
    Zombie          *zombie;

    zombie = new Zombie( this->getZombieType() );
    return zombie;
}

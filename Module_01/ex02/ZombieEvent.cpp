#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ) {
    std::cout << "[ NEW ZOMBIE EVENT ]" << std::endl;
    return;
}

ZombieEvent::~ZombieEvent( void ) {
    if ( this->_zombieType )
        delete this->_zombieType;
    std::cout << "[ ZOMBIE EVENT DIED ]" << std::endl;
    return;
}

void        ZombieEvent::setZombieType( std::string input ) {
    this->_zombieType = new std::string(input);
    std::cout << *(this->getZombieType()) << " set as Zombie Type !" << std::endl;
    return;
}

std::string *ZombieEvent::getZombieType( void ) const {
    return this->_zombieType;
}

Zombie      *ZombieEvent::newZombie( std::string name ) const {
    Zombie          *zombie;

    zombie = new Zombie(name, *(this->getZombieType()));
    return zombie;
}

Zombie      *ZombieEvent::randomChump( void ) const {
    std::string name;

    Zombie      zombie = Zombie(name, *(this->getZombieType()));
    zombie.announce();
    return &zombie;
}

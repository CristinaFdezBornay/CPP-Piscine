#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int N ) {
    Zombie  *zombies = new Zombie[N];

    this->setZombies(zombies);
    this->setNumberZombies(N);
    return;
}

ZombieHorde::~ZombieHorde( void ) {
    Zombie  *zombies;

    zombies = this->getZombies();
    delete [] zombies;
    return;
}

void        ZombieHorde::setNumberZombies( int N ) {
    this->_numberZombies = N;
    return;
}

int         ZombieHorde::getNumberZombies( void ) const {
    return this->_numberZombies;
}

void        ZombieHorde::setZombies( Zombie *zombies ) {
    this->_zombies = zombies;
    return;
}

Zombie      *ZombieHorde::getZombies( void ) const {
    return this->_zombies;
}

void        ZombieHorde::announce( void ) const {
    int     i;
    Zombie  *zombies;

    i = 0;
    zombies = this->getZombies();
    while ( i < this->getNumberZombies() ) {
        zombies->announce();
        zombies++;
        i++;
    }
    return;
}

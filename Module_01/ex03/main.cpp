#include "ZombieHorde.hpp"

int     main( void ) {
    ZombieHorde     *zombieHorde;


    zombieHorde = new ZombieHorde(3);
    zombieHorde->announce();

    delete zombieHorde;
    return 0;
}
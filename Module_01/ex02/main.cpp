#include "ZombieEvent.hpp"

int     main( void ) {
    std::string     input;
    ZombieEvent     *zombieEvent;
    Zombie          *babyZombie;
    Zombie          *randomZombie;
    
    std::cout << "WELCOME TO ZOMBIELAND !\n\n" << std::endl;
    zombieEvent = new ZombieEvent();
    zombieEvent->setZombieType();
    std::cout << "\nNow we are going to have some zombies !\n" << std::endl;

    std::cout << "What is the name of you baby zombie ?" << std::endl;
    std::getline( std::cin, input );
    babyZombie = zombieEvent->newZombie( input );
    babyZombie->announce();

    std::cout << "\n\nNow, a ramdom bastard zombie" << std::endl;
    randomZombie = zombieEvent->randomChump();
    randomZombie->announce();

    std::cout << "\n\nNow, I'm gonna kill the zombies..." << std::endl;
    delete babyZombie;
    delete randomZombie;
    delete zombieEvent;

    return 0;
}
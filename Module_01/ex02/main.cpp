#include "ZombieEvent.hpp"

int     main( void ) {
    std::string     input;
    std::string     nameAllocatedZombie;
    ZombieEvent     *zombieEvent;
    Zombie          *allocatedZombie;
    Zombie          *notAllocatedZombie;
    
    std::cout << "WELCOME TO ZOMBIELAND !\n\n" << std::endl;
    zombieEvent = new ZombieEvent();

    std::cout << "What type of zombie are your zombies ?" << std::endl;
    std::getline( std::cin, input );
    zombieEvent->setZombieType(input);

    std::cout << "\nNow we are going to have some zombies !\n" << std::endl;
    std::cout << "What is the name of you baby allocated zombie ?" << std::endl;
    std::getline( std::cin, nameAllocatedZombie );
    allocatedZombie = zombieEvent->newZombie( nameAllocatedZombie );
    allocatedZombie->announce();
    std::cout << "Now, a ramdom bastard zombie" << std::endl;
    notAllocatedZombie = zombieEvent->randomChump();
    notAllocatedZombie->announce();
    delete allocatedZombie;
    delete zombieEvent;
    return 0;
}
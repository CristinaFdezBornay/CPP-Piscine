#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

# include "Zombie.hpp"

class       ZombieEvent {
    public:
        ZombieEvent( void );
        ~ZombieEvent( void );

        void        setZombieType( std::string type );
        std::string *getZombieType( void ) const;

        Zombie      *newZombie( std::string name ) const ;
        Zombie      *randomChump( void ) const ;

    private:
        std::string *_zombieType;
};

#endif
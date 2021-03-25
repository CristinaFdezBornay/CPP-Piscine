#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

# include "Zombie.hpp"

class       ZombieHorde {
    public:
        ZombieHorde( int N );
        ~ZombieHorde( void );

        void        setNumberZombies( int N );
        int         getNumberZombies( void ) const;

        void        setZombies( Zombie *zombies );
        Zombie      *getZombies( void ) const;

        void        announce( void ) const;

    private:
        int         _numberZombies;
        Zombie      *_zombies;
};

#endif
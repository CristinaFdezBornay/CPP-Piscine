#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"

class HumanB {
    public:
        HumanB( std::string name );
        ~HumanB( void );

        std::string getName( void ) const;

        void        setWeapon( Weapon &weapon );
        Weapon      *getWeapon( void ) const;

        void        attack( void ) const;
    
    private:
        std::string _name;
        Weapon      *_weapon;
};

#endif
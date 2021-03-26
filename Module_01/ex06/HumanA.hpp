#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"

class HumanA {
    public:
        HumanA( std::string name, Weapon &weapon );
        ~HumanA( void );

        std::string getName( void ) const;
        Weapon      getWeapon( void ) const;

        void        attack( void ) const;
    
    private:
        std::string _name;
        Weapon      &_weapon;
};

#endif
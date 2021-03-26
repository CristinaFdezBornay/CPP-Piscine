#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
    return;
}

HumanB::~HumanB( void ) {
    return;
}

void            HumanB::setWeapon( Weapon &weapon ) {
    this->_weapon = &weapon;
    return;
}

std::string     HumanB::getName( void ) const {
    return this->_name;
}

Weapon          *HumanB::getWeapon( void ) const {
    return this->_weapon;
}

void            HumanB::attack( void ) const {
    std::string weapon;

    if ( this->getWeapon()->getType() != "" )
        weapon = this->getWeapon()->getType();
    else
        weapon = std::string("bad energies...");
    std::cout << this->getName() << " attacks with their " << weapon << "\n" << std::endl;
    return;
}
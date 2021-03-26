#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {
    return;
}

HumanA::~HumanA( void ) {
    return;
}

std::string     HumanA::getName( void ) const {
    return this->_name;
}

Weapon          HumanA::getWeapon( void ) const {
    return this->_weapon;
}

void            HumanA::attack( void ) const {
    std::cout << this->getName() << " attacks with their " << this->getWeapon().getType() << "\n" << std::endl;
    return;
}
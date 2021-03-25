#include "Zombie.hpp"

Zombie::Zombie( std::string name, std::string type ) {
    this->setName( name );
    this->setType( type );
    std::cout << "[ NEW ZOMBIE " << this->getName() << " ]" << std::endl;
    return;
}

Zombie::~Zombie( void ) {
    std::cout << "[ " << this->getName() << " ZOMBIE DIED ]" << std::endl;
    return;
}

void        Zombie::setName( std::string name ) {
    this->_name = name;
    return;
}

void        Zombie::setType( std::string type ) {
    this->_type = type;
    return ;
}
std::string Zombie::getName( void ) const {
    return this->_name;
}

std::string Zombie::getType( void ) const {
    return this->_type;
}

void        Zombie::announce( void ) const {
    std::cout << "< " << this->getName() << " " << this->getType() << " > Braiiiiiiinnnssss..." << std::endl;
    return;
}

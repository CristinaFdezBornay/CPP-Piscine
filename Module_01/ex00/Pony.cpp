#include "Pony.hpp"

Pony::Pony( std::string name ) {
    this->setName(name);
    this->setNumberCarrotsEaten(0);
    std::cout << "The baby pony " << this->getName() << " is born in the address " << this << std::endl;
}

Pony::~Pony( void ) {
    std::cout << "The pony " << this->getName() << " passed away :( " << std::endl;
}

void        Pony::setName( std::string name ){
    this->_name = name;
    return;
}

std::string Pony::getName( void ) const {
    return this->_name;
}

void        Pony::setNumberCarrotsEaten( int carrotsEaten ) {
    this->_numberCarrotsEaten = carrotsEaten;
    return;
}

int         Pony::getNumberCarrotsEaten( void ) const {
    return this->_numberCarrotsEaten;
}

void        Pony::run( std::string distance ) const {
    std::cout << this->getName() << " is running " << distance << "km !!" << std::endl;
    std::cout << "Make sure it eats a bit, otherwise we'll have a skinny pony !!" << std::endl;
    return;
}
void        Pony::eat_carrots( void ) {
    std::cout << this->getName() << " is eating a carrot !!" << std::endl;
    this->setNumberCarrotsEaten(this->getNumberCarrotsEaten() + 1);
    std::cout << this->getName() << " has already eaten " << this->getNumberCarrotsEaten() << " carrots" << std::endl;
    std::cout << "Make sure it runs a bit, otherwise we'll have a chubby pony !!" << std::endl;
    return;
}
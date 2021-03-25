#include "Human.hpp"

Human::Human( void ) {
    Brain *brain = new Brain();
    // Brain brainRef = &brain;

    this->setBrain(brain);
    return;
}

Human::~Human( void ) {
    // delete this->getBrain();
    return;
}

void            Human::setBrain( Brain *brain ) {
    this->_brain = brain;
    return;
}

Brain           Human::getBrain( void ) const {
    return this->_brain;
}

std::string     Human::identify() {
    return &(this->getBrain());
}
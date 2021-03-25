#include "Brain.hpp"

Brain::Brain( void ) {
    this->setSize(1500);
    this->setPercentageGreyMatter(55);
    return;
}

Brain::~Brain( void ) {
    return;
}

void            Brain::setSize( int size ) {
    this->_size = size;
    return;
}

int             Brain::getSize( void ) const {
    return this->_size;
}

void            Brain::setPercentageGreyMatter( int percentageGreyMatter ) {
    this->_percentageGreyMatter = percentageGreyMatter;
    return;
}

int             Brain::getPercentageGreyMatter( void ) const {
    return this->_percentageGreyMatter;
}

std::string     Brain::identify( void ) {
    std::string *lol = new std::string("lol");
    return *lol;
}
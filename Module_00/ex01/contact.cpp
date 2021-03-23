#include "./contact.hpp"

void                Contact::setNumber_contacts( int input ) {
    Contact::_number_contacts = input;
    return;
}

void                Contact::setIdentifier( int input ) {
    this->_identifier = input;
    return;
}
void                Contact::setFirst_name( std::string input ) {
    this->_first_name = input;
    return;
}

void                Contact::setLast_name( std::string input ) {
    this->_last_name = input;
    return;
}

void                Contact::setNickname( std::string input ) {
    this->_nickname = input;
    return;
}

void                Contact::setLogin( std::string input) {
    this->_login = input;
    return;
}

void                Contact::setPostal_adress( std::string input) {
    this->_postal_adress = input;
    return;
}

void                Contact::setEmail_adress( std::string input) {
    this->_email_adress = input;
    return;
}

void                Contact::setPhone_number( std::string input) {
    this->_phone_number = input;
    return;
}

void                Contact::setBirthday_date( std::string input) {
    this->_birthday_date = input;
    return;
}

void                Contact::setFav_meal( std::string input) {
    this->_fav_meal = input;
    return;
}

void                Contact::setUnderwear_color( std::string input) {
    this->_underwear_color = input;
    return;
}

void                Contact::setDarkest_secret( std::string input) {
    this->_darkest_secret = input;
    return;
}

int                 Contact::getNumber_contacts( void ) const {
    return Contact::_number_contacts;
}

int                 Contact::getIdentifier( void ) const {
    return this->_identifier;
}

std::string         Contact::getFirst_name( void ) const {
    return this->_first_name;
}

std::string         Contact::getLast_name( void ) const {
    return this->_last_name;
}

std::string      Contact::getNickname( void ) const {
    return this->_nickname;
}

std::string      Contact::getLogin( void ) const {
    return this->_login;
}

std::string      Contact::getPostal_adress( void ) const {
    return this->_postal_adress;
}

std::string      Contact::getEmail_adress( void ) const {
    return this->_email_adress;
}

std::string      Contact::getPhone_number( void ) const {
    return this->_phone_number;
}

std::string      Contact::getBirthday_date( void ) const {
    return this->_birthday_date;
}

std::string      Contact::getFav_meal( void ) const {
    return this->_fav_meal;
}

std::string      Contact::getUnderwear_color( void ) const {
    return this->_underwear_color;
}

std::string      Contact::getDarkest_secret( void ) const {
    return this->_nickname;
}

int             Contact::Add(){
    std::string     input;

    setIdentifier(Contact::getNumber_contacts());
    std::cout << "Introduce your first name:" << std::endl;
    std::getline( std::cin, input );
    setFirst_name( input );
    std::cout << "Introduce your last name:" << std::endl;
    std::getline( std::cin, input );
    setLast_name( input );
    std::cout << "Introduce your nickname:" << std::endl;
    std::getline( std::cin, input );
    setNickname( input );
    std::cout << "Introduce your login:" << std::endl;
    std::getline( std::cin, input );
    setLogin( input );
    std::cout << "Introduce your postal address:" << std::endl;
    std::getline( std::cin, input );
    setPostal_adress( input );
    std::cout << "Introduce your email address:" << std::endl;
    std::getline( std::cin, input );
    setEmail_adress( input );
    std::cout << "Introduce your phone number:" << std::endl;
    std::getline( std::cin, input );
    setPhone_number( input );
    std::cout << "Introduce your birthday date:" << std::endl;
    std::getline( std::cin, input );
    setBirthday_date( input );
    std::cout << "Introduce your favourite meal:" << std::endl;
    std::getline( std::cin, input );
    setFav_meal( input );
    std::cout << "Introduce your underwear color:" << std::endl;
    std::getline( std::cin, input );
    setUnderwear_color( input );
    std::cout << "Introduce your darkest secret:" << std::endl;
    std::getline( std::cin, input );
    setDarkest_secret( input );
    return 0;
}

std::string     Contact::_format_information(std::string information) const {
    int         len = int(information.length());
    std::string formatted_information = "";

    if (len > 10) {
        formatted_information.append(information, 0, 9);
        formatted_information += '.';
        return formatted_information;
    }
    for (int i = 0; i < 10 - len; ++i)
        formatted_information += ' ';
    formatted_information.append(information, 0, len);
    return formatted_information;
}

int                 Contact::print_general_information() const {
    std::string     general_information = "| ";

    general_information += getIdentifier() + '0';
    general_information += " |";
    general_information += _format_information(getFirst_name());
    general_information += "|";
    general_information += _format_information(getLast_name());
    general_information += "|";
    general_information += _format_information(getNickname());
    general_information += "|";
    std::cout << general_information << std::endl;
    return 0;
}

int                 Contact::print_complete_information() const {
    std::string     complete_information = "\nINFORMATION -> ID : ";

    complete_information += getIdentifier() + '0';
    complete_information += "\nFirst Name        : ";
    complete_information += getFirst_name();
    complete_information += "\nLast Name         : ";
    complete_information += getLast_name();
    complete_information += "\nNickname          : ";
    complete_information += getNickname();
    complete_information += "\nLogin             : ";
    complete_information += getLogin();
    complete_information += "\nPostal Address    : ";
    complete_information += getPostal_adress();
    complete_information += "\nEmail Address     : ";
    complete_information += getEmail_adress();
    complete_information += "\nPhone number      : ";
    complete_information += getPhone_number();
    complete_information += "\nBirthdate         : ";
    complete_information += getBirthday_date();
    complete_information += "\nFavourite meal    : ";
    complete_information += getFav_meal();
    complete_information += "\nUnderwear color   : ";
    complete_information += getUnderwear_color();
    complete_information += "\nDarkest Secret    : ";
    complete_information += getDarkest_secret();
    std::cout << complete_information << std::endl;
    return 0;
}

int                 Contact::_number_contacts = 0;
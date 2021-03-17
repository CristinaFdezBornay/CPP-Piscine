#include "./contact.hpp"

void                Contact::setNumber_contacts( int input ) {
    Contact::_number_contacts = input;
    return;
}

void                Contact::setIdentifier( int input ) {
    Contact::_identifier = input;
    return;
}
void                Contact::setFirst_name( std::string input ) {
    Contact::_first_name = input;
    return;
}

void                Contact::setLast_name( std::string input ) {
    Contact::_last_name = input;
    return;
}

void                Contact::setNickname( std::string input ) {
    Contact::_nickname = input;
    return;
}

// void                Contact::setLogin( std::string input );
// void                Contact::setPostal_adress( std::string input );
// void                Contact::setEmail_adress( std::string input );
// void                Contact::setPhone_number( std::string input );
// void                Contact::setBirthday_date( std::string input );
// void                Contact::setFav_meal( std::string input );
// void                Contact::setUnderwear_color( std::string input );
// void                Contact::setDarkest_secret( std::string input );

int                 Contact::getNumber_contacts( void ) const {
    return Contact::_number_contacts;
}

int                 Contact::getIdentifier( void ) const {
    return Contact::_identifier;
}
std::string         Contact::getFirst_name( void ) const {
    return Contact::_first_name;
}

std::string         Contact::getLast_name( void ) const {
    return Contact::_last_name;
}

std::string      Contact::getNickname( void ) const {
    return Contact::_nickname;
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
    // std::cout << "Introduce your login:" << std::endl;
    // std::getline (std::cin,login);
    // std::cout << "Introduce your postal address:" << std::endl;
    // std::getline (std::cin,postal_adress);
    // std::cout << "Introduce your email address:" << std::endl;
    // std::getline (std::cin,email_adress);
    // std::cout << "Introduce your phone number:" << std::endl;
    // std::getline (std::cin,phone_number);
    // std::cout << "Introduce your birthday date:" << std::endl;
    // std::getline (std::cin,birthday_date);
    // std::cout << "Introduce your favourite meal:" << std::endl;
    // std::getline (std::cin,fav_meal);
    // std::cout << "Introduce your underwear color:" << std::endl;
    // std::getline (std::cin,underwear_color);
    // std::cout << "Introduce your darkest secret:" << std::endl;
    // std::getline (std::cin,darkest_secret);
    return 0;
}


bool            Contact::does_exist(int id) const {
    if (id == getIdentifier())
        return true;
    return false;
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
    // complete_information += "\nLogin             : ";
    // complete_information += login;
    // complete_information += "\nPostal Address    : ";
    // complete_information += postal_adress;
    // complete_information += "\nEmail Address     : ";
    // complete_information += email_adress;
    // complete_information += "\nPhone number      : ";
    // complete_information += phone_number;
    // complete_information += "\nBirthdate         : ";
    // complete_information += birthday_date;
    // complete_information += "\nFavourite meal    : ";
    // complete_information += fav_meal;
    // complete_information += "\nUnderwear color   : ";
    // complete_information += underwear_color;
    // complete_information += "\nDarkest Secret    : ";
    // complete_information += darkest_secret;
    std::cout << complete_information << std::endl;
    return 0;
}

int                 Contact::_number_contacts = 0;
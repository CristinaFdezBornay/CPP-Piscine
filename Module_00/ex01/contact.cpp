/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:41:22 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/12 12:58:23 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int                 Contact::getNumber_contacts( void ) {
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

std::ostream &      Contact::_format_information(std::ostream & o, std::string information) const {
    int         len = int(information.length());

    if (len <= 10)
        o << std::setfill(' ') << std::setw(10) << information;
    else
        o << information.substr(0, 9) << ".";
    return o;
}

int                 Contact::print_general_information() const {
    std::ostream &  o = std::cout;

    o << "| " << getIdentifier() << " |" ;
    _format_information(o, getFirst_name()) << "|";
    _format_information(o, getLast_name()) << "|";
    _format_information(o, getNickname()) << "|";
    o << std::endl;
    return 0;
}

int                 Contact::print_complete_information() const {
    std::cout << std::endl << "INFORMATION -> ID : " << getIdentifier() << std::endl;
    std::cout << "First Name        : " << getFirst_name() << std::endl;
    std::cout << "Last Name         : " << getLast_name() << std::endl;
    std::cout << "Nickname          : " << getNickname() << std::endl;
    std::cout << "Login             : " << getLogin() << std::endl;
    std::cout << "Postal Address    : " << getPostal_adress() << std::endl;
    std::cout << "Email Address     : " << getEmail_adress() << std::endl;
    std::cout << "Phone number      : " << getPhone_number() << std::endl;
    std::cout << "Birthdate         : " << getBirthday_date() << std::endl;
    std::cout << "Favourite meal    : " << getFav_meal() << std::endl;
    std::cout << "Underwear color   : " << getUnderwear_color() << std::endl;
    std::cout << "Darkest Secret    : " << getDarkest_secret() << std::endl;
    return 0;
}

int                 Contact::_number_contacts = 0;
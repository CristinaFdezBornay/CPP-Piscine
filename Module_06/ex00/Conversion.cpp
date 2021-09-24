/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:58:27 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/24 16:01:56 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion( std::string input ) : _raw_input( input ) {
    this->_conversion_types[CHAR].type = "Char";
    this->_conversion_types[CHAR].regex = REGEX_CHAR;
    this->_conversion_types[CHAR].ft_convert = &Conversion::convertChar;
    this->_conversion_types[CHAR].ft_print = &Conversion::printChar;
    this->_conversion_types[INT].type = "Int";
    this->_conversion_types[INT].regex = REGEX_INT;
    this->_conversion_types[INT].ft_convert = &Conversion::convertInt;
    this->_conversion_types[INT].ft_print = &Conversion::printInt;
    this->_conversion_types[FLOAT].type = "Float";
    this->_conversion_types[FLOAT].regex = REGEX_FLOAT;
    this->_conversion_types[FLOAT].ft_convert = &Conversion::convertFloat;
    this->_conversion_types[FLOAT].ft_print = &Conversion::printFloat;
    this->_conversion_types[DOUBLE].type = "Double";
    this->_conversion_types[DOUBLE].regex = REGEX_DOUBLE;
    this->_conversion_types[DOUBLE].ft_convert = &Conversion::convertDouble;
    this->_conversion_types[DOUBLE].ft_print = &Conversion::printDouble;
}

Conversion::~Conversion( void ){
    return ;
}

void                Conversion::detectType( void ) {
    for (int i = 0; i < 4; i++)
        if ( std::regex_match(this->_raw_input, std::regex(this->_conversion_types[i].regex)) ) {
            this->_type = i;
            return ;
        }
    throw( InputException() );
}

void                Conversion::convert( void ) {
    try {
        ConvertFt ft_convert = this->_conversion_types[this->_type].ft_convert;
        (*this.*ft_convert)();
    } catch (std::exception & e ) {
        throw( NastyException() );
    }
}

void                Conversion::convertChar( void ) {
    this->_c = this->_raw_input[0];
    this->_i = static_cast<int>(this->_c);
    this->_f = static_cast<float>(this->_c);
    this->_d = static_cast<double>(this->_c);
    this->_decimal = 0;
}

void                Conversion::convertInt( void ) {
    this->_i = std::stoi(this->_raw_input);
    this->_c = static_cast<char>(this->_i);
    this->_f = static_cast<float>(this->_i);
    this->_d = static_cast<double>(this->_i);
    this->_decimal = 0;
}

void                Conversion::convertFloat( void ) {
    this->_f = std::stof(this->_raw_input);
    this->_c = static_cast<char>(this->_f);
    this->_i = static_cast<int>(this->_f);
    this->_d = static_cast<double>(this->_f);
    this->_decimal = this->_raw_input.length() - this->_raw_input.find(".") - 1;
}

void                Conversion::convertDouble( void ) {
    this->_d = std::stod(this->_raw_input);
    this->_c = static_cast<char>(this->_d);
    this->_i = static_cast<int>(this->_d);
    this->_f = static_cast<float>(this->_d);
    this->_decimal = this->_raw_input.length() - this->_raw_input.find(".") - 1;
}

int                 Conversion::trickyCase( void ) {
    if (std::regex_match(this->_raw_input, std::regex(TRICKY_FLOAT)))
        return FLOAT;
    if (std::regex_match(this->_raw_input, std::regex(TRICKY_DOUBLE)))
        return DOUBLE;
    return 0;
}

void                Conversion::printChar( void ) {
    if (trickyCase())
        std::cout << "Impossible" << std::endl;
    else if (this->_d >= ' ' && this->_d <= '~')
        std::cout << "'" << this->_c << "'" << std::endl;
    else if (this->_d >= CHAR_MIN && this->_d <= CHAR_MAX)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "Impossible" << std::endl;
}

void                Conversion::printInt( void ) {
    if (trickyCase())
        std::cout << "Impossible" << std::endl;
    else if (this->_d >= INT_MIN && this->_d <= INT_MAX)
        std::cout << this->_i << std::endl;
    else
        std::cout << "Impossible" << std::endl;
}

void                Conversion::printFloat( void ) {
    if (this->_d == 0)
        std::cout << "0.0f" << std::endl;
    else if (trickyCase())
        std::cout << this->_f << "f" << std::endl;
    else if (this->_d >= FLOAT_MIN && this->_d <= FLOAT_MAX)
        std::cout << std::fixed << this->_f << "f" << std::endl;
    else
        std::cout << "Impossible" << std::endl;
}

void                Conversion::printDouble( void ) {
    if (trickyCase())
        std::cout << this->_d << std::endl;
    else {
        std::cout << std::fixed << this->_d << std::endl;
    }
}

void                Conversion::print( void ) {
    std::cout << "From [ " << this->_conversion_types[this->_type].type << " ] : \"";
    std::cout << this->_raw_input << "\"" << std::endl << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << this->_conversion_types[i].type << " : ";
        (*this.*(this->_conversion_types[i].ft_print))();
    }
}

const char*         Conversion::InputException::what() const throw() {
	return "[Error] Please introduce a valid input.";
}

const char*         Conversion::NastyException::what() const throw() {
	return "[Error] You did something nasty.";
}
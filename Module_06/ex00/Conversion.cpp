/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:58:27 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/23 17:34:04 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion( std::string input ) : _raw_input( input ) {
    this->_conversion_types[CHAR].type = "Char";
    this->_conversion_types[CHAR].regex = REGEX_CHAR;
    this->_conversion_types[CHAR].ft_convert = &Conversion::convertChar;
    this->_conversion_types[CHAR].min = 'a';
    this->_conversion_types[CHAR].max = 'z';
    this->_conversion_types[CHAR].ft_print = &Conversion::printChar;
    this->_conversion_types[INT].type = "Int";
    this->_conversion_types[INT].regex = REGEX_INT;
    this->_conversion_types[INT].ft_convert = &Conversion::convertInt;
    this->_conversion_types[INT].min = INT_MIN;
    this->_conversion_types[INT].max = INT_MAX;
    this->_conversion_types[INT].ft_print = &Conversion::printInt;
    this->_conversion_types[FLOAT].type = "Float";
    this->_conversion_types[FLOAT].regex = REGEX_FLOAT;
    this->_conversion_types[FLOAT].ft_convert = &Conversion::convertFloat;
    this->_conversion_types[FLOAT].min = FLOAT_MIN;
    this->_conversion_types[FLOAT].max = FLOAT_MAX;
    this->_conversion_types[FLOAT].ft_print = &Conversion::printFloat;
    this->_conversion_types[DOUBLE].type = "Double";
    this->_conversion_types[DOUBLE].regex = REGEX_DOUBLE;
    this->_conversion_types[DOUBLE].ft_convert = &Conversion::convertDouble;
    this->_conversion_types[DOUBLE].min = DOUBLE_MIN;
    this->_conversion_types[DOUBLE].max = DOUBLE_MAX;
    this->_conversion_types[DOUBLE].ft_print = &Conversion::printDouble;
}

Conversion::~Conversion( void ){
    return ;
}

int     Conversion::detectType( void ) {
    for (int i = 0; i < 4; i++)
        if ( std::regex_match(this->_raw_input, std::regex(this->_conversion_types[i].regex)) )
            return i;
    throw( InputException::exception() );
}

void                Conversion::convert( int type ) {
    ConvertFt ft_convert = this->_conversion_types[type].ft_convert;
    (*this.*ft_convert)();
}

void                Conversion::convertChar( void ) {
    std::cout << "From Char" << std::endl;
    this->_c = this->_raw_input[0];
    this->_i = static_cast<int>(this->_c);
    this->_f = static_cast<float>(this->_c);
    this->_d = static_cast<double>(this->_c);
    this->_precision = 0;
}

void                Conversion::convertInt( void ) {
    std::cout << "From Int" << std::endl;
    this->_i = std::stoi(this->_raw_input);
    this->_c = static_cast<char>(this->_i);
    this->_f = static_cast<float>(this->_i);
    this->_d = static_cast<double>(this->_i);
    this->_precision = 0;
}

void                Conversion::convertFloat( void ) {
    std::cout << "From Float" << std::endl;
    this->_f = std::stof(this->_raw_input);
    this->_c = static_cast<char>(this->_f);
    this->_i = static_cast<int>(this->_f);
    this->_d = static_cast<double>(this->_f);
    this->_precision = this->_raw_input.find("f") - this->_raw_input.find(".") - 1;
}

void                Conversion::convertDouble( void ) {
    std::cout << "From Double" << std::endl;
    this->_d = std::stod(this->_raw_input);
    this->_c = static_cast<char>(this->_d);
    this->_i = static_cast<int>(this->_d);
    this->_f = static_cast<float>(this->_d);
    this->_precision = this->_raw_input.length() - this->_raw_input.find(".") - 1;
}

void                Conversion::printChar( void ) {
    std::cout << "'" << this->_c << "'" << std::endl;
}

void                Conversion::printInt( void ) {
    std::cout << this->_i << std::endl;
}

void                Conversion::printFloat( void ) {
    std::cout.precision(this->_precision);
    std::cout << this->_f << "f" << std::endl;
}

void                Conversion::printDouble( void ) {
    std::cout.precision(this->_precision);
    std::cout << this->_d << std::endl;
}

void                Conversion::print( void ) {
    for (int i = 0; i < 4; i++) {
        std::cout << this->_conversion_types[i].type << " : ";
        if (this->_d >= this->_conversion_types[i].min && this->_d <= this->_conversion_types[i].max)
            (*this.*(this->_conversion_types[i].ft_print))();
        else
            std::cout << "Non displayable" << std::endl;
    }
}
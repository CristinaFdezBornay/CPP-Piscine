/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:30:20 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/13 23:45:33 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fpv( 0 ) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed( const int nbr ) {
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits( nbr * ( 1 << Fixed::_nbrFractBits ) );
    return ;
}

Fixed::Fixed( const float nbr ) {
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits( roundf( nbr * ( 1 << Fixed::_nbrFractBits ) ) );
    return ;
}

Fixed::Fixed( Fixed const & src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

int                 Fixed::getRawBits( void ) const {
    return this->_fpv;
}

void                Fixed::setRawBits( int const raw ) {
    this->_fpv = raw;
    return ;
}

float               Fixed::toFloat( void )const {
    return ((float)this->getRawBits() / (float)(1 << Fixed::_nbrFractBits));
}

int                 Fixed::toInt( void )const {
    return (this->getRawBits() >> Fixed::_nbrFractBits);
}

Fixed &             Fixed::operator=( Fixed const & rhs ) {
    std::cout << "Assignation operator called" << std::endl;
    if ( this != &rhs )
        this->setRawBits( rhs.getRawBits() );
    return *this;
}

std::ostream &     operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat() ;
    return o;
}

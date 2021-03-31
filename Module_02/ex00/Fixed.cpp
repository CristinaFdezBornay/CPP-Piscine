/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:30:20 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/31 16:50:07 by crfernan         ###   ########.fr       */
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

Fixed::Fixed( Fixed const & src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

int         Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fpv;
}

void        Fixed::setRawBits( int const raw ) {
    // std::cout << "setRawBits member function called" << std::endl;
    this->_fpv = raw;
    return ;
}

Fixed &     Fixed::operator=(Fixed const & src ) {
    std::cout << "Assignation operator called" << std::endl;

    if ( this != &src )
        this->setRawBits( src.getRawBits() );

    return *this;
}

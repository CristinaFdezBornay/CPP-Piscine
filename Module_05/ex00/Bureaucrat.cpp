/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:09:09 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/29 23:16:38 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {
    return ;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) {
    this->setName( name );
    this->setGrade( grade );
    return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) {
    *this = src;
    return ;
}

Bureaucrat::~Bureaucrat( void ) {
    return ;
}

void                Bureaucrat::setName( std::string const input ) {
    this->_name = input;
    return ;
}

void                Bureaucrat::setGrade( unsigned int input ) {
    if ( input < 1 )
        throw( Bureaucrat::GradeTooHighException() );
    if ( input > 150 )
        throw( Bureaucrat::GradeTooLowException() );
    this->_grade = input;
    return;
}

std::string         Bureaucrat::getName( void ) const {
    return this->_name;
}

unsigned int        Bureaucrat::getGrade( void ) const {
    return this->_grade;
}

void                Bureaucrat::incrementGrade( void ) {
    try {
        this->setGrade( this->getGrade() - 1 );
    }
    catch ( Bureaucrat::GradeTooHighException & error ) {
        std::cout << error.what() << std::endl;
    }
    return ;
}
void                Bureaucrat::decrementGrade( void ) {
    try {
        this->setGrade( this->getGrade() + 1 );
    }
    catch ( Bureaucrat::GradeTooLowException & error ) {
        std::cout << error.what() << std::endl;
    }
    return ;
}

Bureaucrat &        Bureaucrat::operator=( Bureaucrat const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    return *this;
}

std::ostream &      operator<<( std::ostream & o, Bureaucrat const & src ) {
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return o;
}
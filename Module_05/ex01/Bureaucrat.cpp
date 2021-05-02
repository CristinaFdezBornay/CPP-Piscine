/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:09:09 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 10:20:46 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {
    return ;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name( name ) {
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
        std::cout << "Cannot increment grade because " << error.what() << std::endl;
    }
    return ;
}
void                Bureaucrat::decrementGrade( void ) {
    try {
        this->setGrade( this->getGrade() + 1 );
    }
    catch ( Bureaucrat::GradeTooLowException & error ) {
        std::cout << "Cannot decrement grade because " << error.what() << std::endl;
    }
    return ;
}

void                Bureaucrat::signForm( Form * form ) const {
    try {
        form->beSigned( *this );
        std::cout << this->getName() << " signs " << form->getName() << std::endl;
    } catch ( Bureaucrat::GradeTooLowException & e) {
        std::cout << this->getName() << " cannot sign " << form->getName() << " because " << e.what() << std::endl;
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

const char*         Bureaucrat::GradeTooLowException::what() const throw() {
	return "their grade is too low";
}

const char*         Bureaucrat::GradeTooHighException::what() const throw() {
	return "their grade is too high";
}
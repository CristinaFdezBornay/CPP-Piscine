/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:09:09 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 10:25:54 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _gradeToSign(0), _gradeToExecute(0) {
    return ;
}

Form::Form( std::string name, unsigned int gradeToSign, unsigned int gradeToExecute ) :
    _name( name ), _gradeToSign( gradeToSign ), _gradeToExecute( gradeToExecute ) {
    this->setSigned( bool(0) );
    return ;
}

Form::Form( Form const & src ) : _gradeToSign(0), _gradeToExecute(0) {
    *this = src;
    return ;
}

Form::~Form( void ) {
    return ;
}

void                Form::setSigned( bool isSigned ) {
    this->_signed = isSigned;
    return;
}

std::string         Form::getName( void ) const {
    return this->_name;
}

bool                Form::getSigned( void ) const {
    return this->_signed;
}

unsigned int        Form::getGradeToSign( void ) const {
    return this->_gradeToSign;
}

unsigned int        Form::getGradeToExecute( void ) const {
    return this->_gradeToExecute;
}

void                Form::beSigned( Bureaucrat const & bureaucrat ) {
    if ( bureaucrat.getGrade() > this->getGradeToSign() )
        throw( Bureaucrat::GradeTooLowException() );
    this->setSigned( bool(1) );
    return ;
}

Form &              Form::operator=( Form const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    return *this;
}

std::ostream &      operator<<( std::ostream & o, Form const & src ) {
    o << src.getName() << " form is ";
    o << (src.getSigned() ? "signed." : "not signed.") << std::endl;
    return o;
}

const char*         Form::FormNotSignedException::what() const throw() {
    return "the docuemnt is not signed";
}

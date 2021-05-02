/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:09:09 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 18:49:09 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _gradeToSign(0), _gradeToExecute(0) {
    return ;
}

Form::Form( std::string name, unsigned int gradeToSign, unsigned int gradeToExecute ) :
    _name( name ), _gradeToSign( gradeToSign ), _gradeToExecute( gradeToExecute ) {
    this->setSigned( bool(0) );
    try {
        this->_checkGrades();
    } catch ( std::exception & error ) {
        std::cout << this->getName() << " cannot be created because " << error.what() << std::endl;
        this->~Form();
    }
    return ;
}

Form::Form( Form const & src ) : _gradeToSign(0), _gradeToExecute(0) {
    *this = src;
    return ;
}

Form::~Form( void ) {
    return ;
}

void                Form::_checkGrades( void ) const {
    if ( this->getGradeToSign() < 1 or this->getGradeToExecute() < 1 )
        throw( Form::GradeTooHighException() );
    if ( this->getGradeToSign() > 150 or this->getGradeToExecute() > 150 )
        throw( Form::GradeTooLowException() );
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

void                Form::execute( Bureaucrat const & bureaucrat ) {
    if ( !(this->getSigned()) )
        throw( Form::FormNotSignedException() );
    if ( bureaucrat.getGrade() > this->getGradeToExecute() )
        throw( Bureaucrat::GradeTooLowException() );
    this->action();
    return ;
};

Form &              Form::operator=( Form const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    return *this;
}

std::ostream &      operator<<( std::ostream & o, Form const & src ) {
    o << src.getName() << " form is ";
    o << ( src.getSigned() ? "signed." : "not signed." ) << std::endl;
    return o;
}

const char*         Form::FormNotSignedException::what() const throw() {
    return "the document is not signed";
}

const char*         Form::GradeTooLowException::what() const throw() {
	return "its grade is too low";
}

const char*         Form::GradeTooHighException::what() const throw() {
	return "its grade is too high";
}
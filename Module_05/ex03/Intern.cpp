/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:35:52 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/07 15:33:42 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
    this->_availableForms["shrubbery creation"] = &Intern::makeShrubberyCreation;
    this->_availableForms["robotomy request"] = &Intern::makeRobotomyRequest;
    this->_availableForms["presidential pardon"] = &Intern::makePresidentialPardon;
    return;
}

Intern::Intern( Intern const & src ) {
    *this = src;
    return ;
}

Intern::~Intern( void ) {
    return ;
}

Form *          Intern::makeShrubberyCreation( std::string target ) const {
    return new ShrubberyCreationForm(target);
}

Form *          Intern::makeRobotomyRequest( std::string target ) const {
    return new RobotomyRequestForm(target);
}

Form *          Intern::makePresidentialPardon( std::string target ) const {
    return new PresidentialPardonForm(target);
}

Form *          Intern::makeForm( std::string name, std::string target ) {
    MakeFormFt  ft;

    try {
        ft = this->_availableForms[name];
        if (!ft)
            throw( Intern::InternException() );
        std::cout << "Inter created " << name << std::endl;
        return (*this.*ft)(target);
    } catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
        return NULL;
    }
}

Intern &        Intern::operator=( Intern const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    return *this;
}

const char*     Intern::InternException::what() const throw() {
	return ("I dont know what to do, I'm young and disorientated.\nFORM NOT CREATED.");
}
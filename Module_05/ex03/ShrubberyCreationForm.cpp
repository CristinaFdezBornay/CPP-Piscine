/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 09:08:22 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/06 13:00:59 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( ) {
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form( "shrubbery", 145, 137 ), _target( target ) {
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
    return ;
}

std::string const       ShrubberyCreationForm::getTarget( void ) const {
    return this->_target;
}

void                    ShrubberyCreationForm::action( void ) const {
    std::ofstream       myFile;

    try {
        myFile.open(this->getTarget() + "_shrubbery");
        myFile << "      ." << std::endl;
        myFile << "   __/ \\__" << std::endl;
        myFile << "   \\     /" << std::endl;
        myFile << "   /.'o'.\\" << std::endl;
        myFile << "    .o.'." << std::endl;
        myFile << "   .'.'o'." << std::endl;
        myFile << "  o'.o.'.o." << std::endl;
        myFile << " .'.o.'.'.o." << std::endl;
        myFile << ".o.'.o.'.o.'." << std::endl;
        myFile << "   [_____]" << std::endl;
        myFile << "    \\___/" << std::endl;
        myFile.close();
    } catch ( std::exception & e ) {
	    throw ( ShrubberyCreationForm::ShrubberyException() );
    }
    return ;
}

const char*             ShrubberyCreationForm::ShrubberyException::what() const throw() {
	return "there has been a problem with the file to write ASCII trees on it.";
}
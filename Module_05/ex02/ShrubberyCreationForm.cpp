/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 09:08:22 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 09:23:57 by crfernan         ###   ########.fr       */
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

void        ShrubberyCreationForm::action( void ) const {
    std::cout << "ShrubberyCreationForm action" << std::endl;
    return ;
}
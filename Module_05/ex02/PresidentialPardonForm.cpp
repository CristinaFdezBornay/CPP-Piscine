/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 09:08:22 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 09:49:18 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form( ) {
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form( "presidential pardon", 25, 5 ), _target( target ) {
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
    return ;
}

void        PresidentialPardonForm::action( void ) const {
    std::cout << "PresidentialPardonForm action" << std::endl;
    return ;
}
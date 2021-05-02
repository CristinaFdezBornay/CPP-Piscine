/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 09:08:22 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 09:49:27 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( ) {
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form( "robotomy request", 72, 45 ), _target( target ) {
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
    return ;
}

void        RobotomyRequestForm::action( void ) const {
    std::cout << "RobotomyRequestForm action" << std::endl;
    return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 09:08:22 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/06 13:10:57 by crfernan         ###   ########.fr       */
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

std::string const       RobotomyRequestForm::getTarget( void ) const {
    return this->_target;
}

void                    RobotomyRequestForm::action( void ) const {
    std::cout << "Drilling noise: https://www.youtube.com/watch?v=WPRJqHGJbnU" << std::endl;
    if (rand() % 2)
		std::cout << this->getTarget() << " has been succesfully Robotomized !!" << std::endl; 
    else
        throw( RobotomyRequestForm::RobotomyException() );
    return ;
}

const char*             RobotomyRequestForm::RobotomyException::what() const throw() {
	return "just 50% of the times we can robotomize succesfully.";
}
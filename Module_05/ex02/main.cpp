/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 22:25:04 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/06 13:11:41 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int         main( void ) {
    Bureaucrat  *mark = new Bureaucrat("Mark", 150);
    Bureaucrat  *bob = new Bureaucrat("Bob", 140);
    Bureaucrat  *jim = new Bureaucrat("Jim", 1);
    Form        *shrubbery = new ShrubberyCreationForm("Home");
    Form        *robotomy = new RobotomyRequestForm("Lol");
    Form        *presidentialPardon = new PresidentialPardonForm("BumBum");

    std::cout << std::endl << "======================  TESTING PERMISSIONS  ======================" << std::endl;
    jim->executeForm( shrubbery );
    mark->signForm( shrubbery );
    bob->signForm( shrubbery );
    bob->executeForm( shrubbery );
    jim->signForm( robotomy );
    jim->signForm( presidentialPardon );

    std::cout << std::endl << "======================  TESTING SHUBBERY  ======================" << std::endl;
    jim->executeForm( shrubbery );

    std::cout << std::endl << "======================  TESTING ROBOTOMY  ======================" << std::endl;
    jim->executeForm( robotomy );
    jim->executeForm( robotomy );
    jim->executeForm( robotomy );
    jim->executeForm( robotomy );
    jim->executeForm( robotomy );
    jim->executeForm( robotomy );
    jim->executeForm( robotomy );
    jim->executeForm( robotomy );

    std::cout << std::endl << "======================  TESTING PRESIDENTIAL PARDON  ======================" << std::endl;
    jim->executeForm( presidentialPardon );

    delete mark;
    delete bob;
    delete jim;
    delete shrubbery;
    return 0;
}

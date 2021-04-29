/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 22:25:04 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/30 01:07:35 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int         main( void ) {
    Bureaucrat *bob = new Bureaucrat("Bob", 5);
    Form *form = new Form("Form", 4, 4);

    try {
        form->beSigned( *bob );
    } catch ( Form::GradeTooLowException & error ) {
        std::cout << error.what() << std::endl;
    }
    std::cout << *form;

    std::cout << std::endl << "==== Uncle Boby gets promoted ====" << std::endl;
    bob->incrementGrade();
    std::cout << *bob;

    try {
        form->beSigned( *bob );
    } catch ( Form::GradeTooLowException & error ) {
        std::cout << error.what() << std::endl;
    }

    std::cout << *form;

    delete bob;
    delete form;
}

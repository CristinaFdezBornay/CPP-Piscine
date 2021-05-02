/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 22:25:04 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 11:10:00 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int         main( void ) {
    Form tooHigh("Form Too High", 0, 4);
    Form tooLow("Form Too Low", 11, 400);

    (void)tooHigh;
    (void)tooLow;

    std::cout << "==============================================" << std::endl << std::endl;

    Bureaucrat *bob = new Bureaucrat("Bob", 5);
    Form *form = new Form("Form", 4, 4);

    bob->signForm( form );
    std::cout << *form;

    std::cout << std::endl << "==== Uncle Boby gets promoted ====" << std::endl;
    bob->incrementGrade();
    std::cout << *bob;

    bob->signForm( form );
    std::cout << *form;

    delete bob;
    delete form;
    return 0;
}

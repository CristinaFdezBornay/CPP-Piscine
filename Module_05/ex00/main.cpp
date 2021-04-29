/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 22:25:04 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/29 23:26:58 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int         main( void ) {
    Bureaucrat *bob = new Bureaucrat("Bob", 1);
    Bureaucrat *jim = new Bureaucrat("Jim", 150);

    std::cout << *bob;
    std::cout << *jim;

    std::cout << std::endl << "=====  Increment Bob's Grade  =====" << std::endl;
    bob->incrementGrade();
    std::cout << *bob;
    std::cout << std::endl << "=====  Decrement Bob's Grade  =====" << std::endl;
    bob->decrementGrade();
    std::cout << *bob;

    std::cout << std::endl << "=====  Decrement Jim's Grade  =====" << std::endl;
    jim->decrementGrade();
    std::cout << *jim;
    std::cout << std::endl << "=====  Increment Jim's Grade  =====" << std::endl;
    jim->incrementGrade();
    std::cout << *jim;
}

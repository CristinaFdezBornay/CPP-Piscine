/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 22:25:04 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/06 16:19:30 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"

int         main( void ) {
    Intern      *intern = new Intern();
    Form        *form;

    std::cout << std::endl;
    form = intern->makeForm("shrubbery creation", "Bender");
    form->action();
    delete form;

    std::cout << std::endl;
    form = intern->makeForm("robotomy request", "Bender");
    form->action();
    delete form;

    std::cout << std::endl;
    form = intern->makeForm("presidential pardon", "Bender");
    form->action();
    delete form;

    std::cout << std::endl;
    form = intern->makeForm("lololol", "lalalala");
    return 0;
}

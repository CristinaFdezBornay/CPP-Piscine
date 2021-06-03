/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:14:33 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/03 16:30:32 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Dwarf.hpp"

void    test( Sorcerer &robert ) {
    Dwarf   tommy("Tommy");

    std::cout << tommy;
    robert.polymorph(tommy);
}

void    check_args_and_run_test( int argc, char **argv, Sorcerer &robert ) {
    if ( argc == 1 or argv[1][0] != 't' )
        return ;
    std::cout << std::endl;
    std::cout << "============================= EXTRA TESTS =============================" << std::endl;
    test( robert );
    std::cout << "=======================================================================" << std::endl;
    std::cout << std::endl;
}

int     main( int argc, char **argv ) {
    Sorcerer    robert("Robert", "the Magnificent");
    Victim      jim("Jimmy");
    Peon        joe("Joe");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

    check_args_and_run_test( argc, argv, robert );

    return 0;
}
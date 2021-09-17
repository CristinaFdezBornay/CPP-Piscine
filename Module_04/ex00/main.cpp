/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:14:33 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/17 11:07:56 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "OtherVictim.hpp"
#include "Dwarf.hpp"

void    test( Sorcerer &robert ) {
    Dwarf       tommy("Tommy");
    OtherVictim jack("Jack");

    std::cout << tommy << jack;
    robert.polymorph(tommy);
    robert.polymorph(jack);
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
    // OtherVictim jack("Jack");

    std::cout << robert << jim << joe;
    // std::cout << robert << jim << joe << jack;
    robert.polymorph(jim);
    robert.polymorph(joe);
    // robert.polymorph(jack);

    check_args_and_run_test( argc, argv, robert );

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:04:07 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/26 19:24:25 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

void    test( void ) {
    ISpaceMarine*   tactMarine = new TacticalMarine;
    ISpaceMarine*   assTerm = new AssaultTerminator;
    Squad*          squad_1 = new Squad;

    std::cout << "Push NULL"<< std::endl;
    squad_1->push(NULL);
    std::cout << "Count Marines SQ1: " << squad_1->getCount() << std::endl;

    std::cout << "Push Tactical Marine    1" << std::endl;
    squad_1->push(tactMarine);
    std::cout << "Count Marines SQ1: " << squad_1->getCount() << std::endl;

    std::cout << "Push Assault Terminator 1" << std::endl;
    squad_1->push(assTerm);
    std::cout << "Count Marines SQ1: " << squad_1->getCount() << std::endl;

    std::cout << "Push Tactical Marine    2" << std::endl;
    squad_1->push(tactMarine);
    std::cout << "Count Marines SQ1: " << squad_1->getCount() << std::endl << std::endl;

    std::cout << "Creating Squad 2 : construtor by copy & push" << std::endl;
    Squad*          squad_2 = new Squad( *squad_1 );
    squad_2->push(tactMarine);
    std::cout << "Count Marines SQ2: " << squad_2->getCount() << std::endl << std::endl;

    std::cout << "Deleting Squadsss" << std::endl << std::endl;
    delete squad_1;
    delete squad_2;
}

void    check_args_and_run_test( int argc, char **argv ) {
    if ( argc == 1 or argv[1][0] != 't' )
        return ;
    std::cout << std::endl;
    std::cout << "============================= EXTRA TESTS =============================" << std::endl;
    test( );
    std::cout << "=======================================================================" << std::endl;
    std::cout << std::endl;
}


int     main( int argc, char **argv ) {
    ISpaceMarine*   bob = new TacticalMarine;
    ISpaceMarine*   jim = new AssaultTerminator;
    ISquad*         vlc = new Squad;

    vlc->push(bob);
    vlc->push(jim);

    for ( int i = 0; i < vlc->getCount(); ++i ) {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete vlc;

    check_args_and_run_test( argc, argv );

    return 0;
}
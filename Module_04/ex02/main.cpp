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
    ISpaceMarine*   bob = new TacticalMarine;
    ISquad*         vlc = new Squad;

    std::cout << "Push NULL"<< std::endl;
    vlc->push(NULL);
    std::cout << "Count Marines " << vlc->getCount() << std::endl;
    std::cout << "Push Bob      1"<< std::endl;
    vlc->push(bob);
    std::cout << "Count Marines " << vlc->getCount() << std::endl;
    std::cout << "Push Bob      2"<< std::endl;
    vlc->push(bob);
    std::cout << "Count Marines " << vlc->getCount() << std::endl;
    std::cout << "Push Bob      3"<< std::endl;
    vlc->push(bob);
    std::cout << "Count Marines " << vlc->getCount() << std::endl;

    delete vlc;
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
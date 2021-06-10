/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:54:22 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 14:31:41 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "AnotherWeapon.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "AnotherEnemy.hpp"

void    test( Character *me ) {
    AWeapon     *aw = new AnotherWeapon();
    Enemy       *ae = new AnotherEnemy();

    me->equip( aw );
    me->attack( ae );
    me->attack( ae );
}

void    check_args_and_run_test( int argc, char **argv, Character *me ) {
    if ( argc == 1 or argv[1][0] != 't' )
        return ;
    std::cout << std::endl;
    std::cout << "============================= EXTRA TESTS =============================" << std::endl;
    test( me );
    std::cout << "=======================================================================" << std::endl;
    std::cout << std::endl;
}


int     main( int argc, char **argv ) {
    Character*  me = new Character("me");
    std::cout << *me;

    Enemy*      b = new RadScorpion();

    AWeapon*    pr = new PlasmaRifle();
    AWeapon*    pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    check_args_and_run_test( argc, argv, me );

    return 0;
}
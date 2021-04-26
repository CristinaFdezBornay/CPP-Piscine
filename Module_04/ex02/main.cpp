/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:04:07 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/23 22:59:14 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int                 main( void ) {
    ISpaceMarine*   bob = new TacticalMarine;
    ISpaceMarine*   jim = new AssaultTerminator;
    // ISquad*         vlc = new Squad;

    // vlc->push(bob);
    // vlc->push(jim);

    // for ( int i = 0; i < vlc->getCount(); ++i ) {
    //     ISpaceMarine* cur = vlc->getUnit(i);
    //     cur->battleCry();
    //     cur->rangedAttack();
    //     cur->meleeAttack();
    // }

    bob->battleCry();
    bob->rangedAttack();
    bob->meleeAttack();

    jim->battleCry();
    jim->rangedAttack();
    jim->meleeAttack();

    delete bob;
    delete jim;

    // delete vlc;
    return 0;
}
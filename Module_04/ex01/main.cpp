/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:54:22 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/09 01:04:50 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
    // Character*      me = new Character("me");
    // Enemy*          b = new RadScorpion();
    // std::cout << *me;

    AWeapon* pr = new PlasmaRifle();
    pr->attack();
    AWeapon* pf = new PowerFist();
    pf->attack();
    // me->equip(pr);
    // std::cout << *me;
    // me->equip(pf);
    // me->attack(b);
    // std::cout << *me;
    // me->equip(pr);
    // std::cout << *me;
    // me->attack(b);
    // std::cout << *me;
    // me->attack(b);
    // std::cout << *me;
    return 0;
}
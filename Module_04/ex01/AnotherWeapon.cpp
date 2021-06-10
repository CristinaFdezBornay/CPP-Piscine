/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnotherWeapon.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:48:11 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 13:02:38 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnotherWeapon.hpp"

AnotherWeapon::AnotherWeapon( void ) : AWeapon( "Another Weapon", 50, 200 ) {
    return ;
}

AnotherWeapon::~AnotherWeapon( void ) {
    return ;
}

void            AnotherWeapon::attack( void ) const {
    std::cout << "* THE MOST POWERFUL WEAPON ON EARTH *" << std::endl;
    return ;
}
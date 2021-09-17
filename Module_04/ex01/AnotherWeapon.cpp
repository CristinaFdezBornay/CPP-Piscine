/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnotherWeapon.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:48:11 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/17 12:35:06 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnotherWeapon.hpp"

AnotherWeapon::AnotherWeapon( void ) : AWeapon( "Another Weapon", 12, 500 ) {
    return ;
}

AnotherWeapon::~AnotherWeapon( void ) {
    return ;
}

void            AnotherWeapon::attack( void ) const {
    std::cout << "* THE MOST POWERFUL WEAPON ON EARTH *" << std::endl;
    return ;
}
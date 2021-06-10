/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:48:11 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 12:42:38 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon( "Plasma Rifle", 5, 21 ) {
    return ;
}

PlasmaRifle::~PlasmaRifle( void ) {
    return ;
}

void            PlasmaRifle::attack( void ) const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return ;
}
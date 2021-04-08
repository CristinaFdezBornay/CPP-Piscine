/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:48:11 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/09 00:53:39 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon( "Plasma Rifle", 21, 5 ) {
    return ;
}

// PlasmaRifle::PlasmaRifle( PlasmaRifle const & rhs );
// PlasmaRifle::~PlasmaRifle( void );

// PlasmaRifle &   PlasmaRifle::operator=( PlasmaRifle const & rhs );

void            PlasmaRifle::attack( void ) const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return ;
}
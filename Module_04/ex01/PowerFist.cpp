/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:48:11 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/09 01:04:02 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon( "Plasma Rifle", 50, 8 ) {
    return ;
}

// PowerFist::PowerFist( PowerFist const & rhs );
// PowerFist::~PowerFist( void );

// PowerFist &   PowerFist::operator=( PowerFist const & rhs );

void            PowerFist::attack( void ) const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
    return ;
}
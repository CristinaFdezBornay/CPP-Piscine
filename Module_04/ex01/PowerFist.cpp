/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:48:11 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/17 23:25:54 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon( "Power Fist", 8, 50 ) {
    return ;
}

void            PowerFist::attack( void ) const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
    return ;
}
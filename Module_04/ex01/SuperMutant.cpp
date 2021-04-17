/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:57:56 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/17 22:54:34 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy( 170, "Super Mutant" ) {
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return ;
}

SuperMutant::~SuperMutant( void ) {
    std::cout << "Aaargh..." << std::endl;
    return ;
}

void    SuperMutant::takeDamage( int damage ) {
    Enemy::takeDamage( damage - 3 );
    return ;
}
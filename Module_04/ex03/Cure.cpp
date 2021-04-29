/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:02:47 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/29 11:00:08 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" ) {
    return ;
}

Cure::~Cure( void ) {
    return ;
}

Cure*   Cure::clone( void ) const {
    Cure *clone = new Cure( *this );
    return clone;
}

void    Cure::use( ICharacter& target ) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    AMateria::use( target );
    return ;
}
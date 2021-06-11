/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnotherMateria.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:02:47 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/11 12:22:44 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnotherMateria.hpp"

AnotherMateria::AnotherMateria( void ) : AMateria( "Another Materia" ) {
    return ;
}

AnotherMateria::~AnotherMateria( void ) {
    return ;
}

AnotherMateria*   AnotherMateria::clone( void ) const {
    AnotherMateria *clone = new AnotherMateria( *this );
    return clone;
}

void    AnotherMateria::use( ICharacter& target ) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    AMateria::use( target );
    return ;
}
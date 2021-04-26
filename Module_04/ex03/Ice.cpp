/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:02:47 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/26 20:05:06 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

~Ice( void ) {
    return ;
}

Ice*    Ice::clone( void ) const {
    Ice *clone = new Ice( *this );
    return clone;
}

void    Ice::use( ICharacter& target ) {
    std::cout << "* shoots an ice bolt at " << target->getName() << " *" << std::endl;
    AMateria::use( target );
    return ;
}
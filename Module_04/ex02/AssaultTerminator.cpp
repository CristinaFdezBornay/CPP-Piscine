/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:28:32 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/26 18:41:00 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void ) {
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::~AssaultTerminator( void ) {
    std::cout << "I’ll be back..." << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const &rhs ) {
    *this = rhs;
    return ;
}

AssaultTerminator*   AssaultTerminator::clone( void ) const  {
    AssaultTerminator *clone = new AssaultTerminator( *this );
    return clone;
}

void            AssaultTerminator::battleCry( void ) const  {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
    return ;
}

void            AssaultTerminator::rangedAttack( void ) const  {
    std::cout << "* does nothing *" << std::endl;
    return ;
}

void            AssaultTerminator::meleeAttack( void ) const  {
    std::cout << "* attacks with chainfists *" << std::endl;
    return ;
}

AssaultTerminator &     AssaultTerminator::operator=( AssaultTerminator const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    return *this;
}

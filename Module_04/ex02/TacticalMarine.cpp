/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:28:32 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/23 22:58:10 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

 TacticalMarine:: TacticalMarine( void ) {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    return ;
}

 TacticalMarine::~ TacticalMarine( void ) {
    std::cout << "Aaargh..." << std::endl;
    return ;
}

 TacticalMarine:: TacticalMarine(  TacticalMarine const & rhs ) {
    *this = rhs;
    return ;
}

 TacticalMarine*    TacticalMarine::clone( void ) const  {
     TacticalMarine *clone = new  TacticalMarine( *this );
    return clone;
}

void             TacticalMarine::battleCry( void ) const  {
    std::cout << "For the holy PLOT!" << std::endl;
    return ;
}

void             TacticalMarine::rangedAttack( void ) const  {
    std::cout << "* attacks with a bolter *" << std::endl;
    return ;
}

void             TacticalMarine::meleeAttack( void ) const  {
    std::cout << "* attacks with a chainsword *" << std::endl;
    return ;
}

 TacticalMarine &      TacticalMarine::operator=(  TacticalMarine const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    // this->setType( rhs.getType() );
    // this->setHitPoints( rhs.getHitPoints() );
    return *this;
}

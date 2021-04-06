/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 23:20:17 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 23:54:37 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : ClapTrap( ) {
    std::cout << "N1J4-TP Default Constructor" << std::endl;
    return ;
}

NinjaTrap::~NinjaTrap( void ) {
    std::cout << "💥 💥 N1J4-TP OHH NOOOO " << this->getName() << " DIED..."<< std::endl;
    return ;
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap( name, 1, 60, 60, 120, 120, 60, 5, 0 ){
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << " is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) : ClapTrap( src ) {
    *this = src;
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << " has been created by copy and is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

void        NinjaTrap::ninjaShoebox( ClapTrap const & src ) {
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << ": CL4P-TP " << src.getName() << " あなたは死ぬ準備をする必要があります!!!!!" << std::endl;
    return ;
}

void        NinjaTrap::ninjaShoebox( FragTrap const & src ) {
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << ": FR4G-TP " << src.getName() << " あなたは死ぬ準備をする必要があります!!!!!" << std::endl;
    return ;
}

void        NinjaTrap::ninjaShoebox( ScavTrap const & src ) {
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << ": SC4V-TP " << src.getName() << " あなたは死ぬ準備をする必要があります!!!!!" << std::endl;
    return ;
}

void        NinjaTrap::ninjaShoebox( NinjaTrap const & src ){
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << ": N1J4-TP " << src.getName() << " あなたは死ぬ準備をする必要があります!!!!!" << std::endl;
    return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 23:20:17 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/16 16:58:39 by crfernan         ###   ########.fr       */
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

NinjaTrap::NinjaTrap( std::string name ) {
    this->setName( name );
    this->setLevel( 1 );
    this->setMaxHitPoints( 60 );
    this->setHitPoints( 60 );
    this->setMaxEnergyPoints( 120 );
    this->setEnergyPoints( 120 );
    this->setMeleeAttackDamage( 60 );
    this->setRangedAttackDamage( 5 );
    this->setArmorDamageReduction( 0 );
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << " is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}


NinjaTrap::NinjaTrap( NinjaTrap const & src ) : ClapTrap( src ) {
    *this = src;
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << " has been created by copy and is ready to figggghhhhttttTTT !!!!!" << std::endl;
    return ;
}

void        NinjaTrap::rangedAttack( std::string const & target ) {
    ClapTrap::rangedAttack( target,"N1J4-TP" );
    return ;
}

void        NinjaTrap::meleeAttack( std::string const & target ) {
    ClapTrap::meleeAttack( target,"N1J4-TP" );
    return ;
}

void        NinjaTrap::ninjaShoebox( ClapTrap const & src ) {
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << ": CL4P-TP " << src.getName() << " あなたは死ぬ準備をする必要があります!!!!!" << std::endl;
    return ;
}

void        NinjaTrap::ninjaShoebox( FragTrap const & src ) {
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << ": FR4G-TP " << src.getName() << " あなたは苦しむ準備をしなければなりません!!!!!" << std::endl;
    return ;
}

void        NinjaTrap::ninjaShoebox( ScavTrap const & src ) {
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << ": SC4V-TP " << src.getName() << " あなたは悲鳴を上げる準備ができている必要があります!!!!!" << std::endl;
    return ;
}

void        NinjaTrap::ninjaShoebox( NinjaTrap const & src ){
    std::cout << "🥷  🥷  N1J4-TP " << this->getName() << ": N1J4-TP " << src.getName() << " 私たちは忍者なので、私はあなたに何もするつもりはありません!!!!!" << std::endl;
    return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:44:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/03 22:40:51 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int                 main( void ) {
    FragTrap andy("andy");
    FragTrap zoo("zoo");

    andy.rangedAttack(zoo.getName());
    zoo.takeDamage(andy.getRangedAttackDamage());
    
    zoo.meleeAttack(andy.getName());
    andy.takeDamage(zoo.getMeleeAttackDamage());
    
    andy.vaulthunter_dot_exe(zoo.getName());
    
    zoo.meleeAttack(andy.getName());
    andy.takeDamage(zoo.getMeleeAttackDamage());
    
    andy.vaulthunter_dot_exe(zoo.getName());
    andy.vaulthunter_dot_exe(zoo.getName());
    andy.vaulthunter_dot_exe(zoo.getName());
    andy.vaulthunter_dot_exe(zoo.getName());
    
    andy.beRepaired(25);
    return 0;
}
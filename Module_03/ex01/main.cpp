/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:44:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 17:16:18 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int                 main( void ) {
    ScavTrap cristina("Cristina");
    FragTrap the_other_robot("The other robot");

    cristina.rangedAttack(the_other_robot.getName());
    the_other_robot.takeDamage(cristina.getRangedAttackDamage());
    
    the_other_robot.meleeAttack(cristina.getName());
    cristina.takeDamage(the_other_robot.getMeleeAttackDamage());
    
    cristina.challengeNewcomer(the_other_robot.getName());
    
    the_other_robot.meleeAttack(cristina.getName());
    cristina.takeDamage(the_other_robot.getMeleeAttackDamage());
    
    cristina.challengeNewcomer(the_other_robot.getName());
    cristina.challengeNewcomer(the_other_robot.getName());
    cristina.challengeNewcomer(the_other_robot.getName());
    cristina.challengeNewcomer(the_other_robot.getName());
    
    cristina.beRepaired(25);
    return 0;
}
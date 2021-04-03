/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:44:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/04 00:37:51 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int                 main( void ) {
    FragTrap cristina("Cristina");
    FragTrap the_other_robot("The other robot");

    cristina.rangedAttack(the_other_robot.getName());
    the_other_robot.takeDamage(cristina.getRangedAttackDamage());
    
    the_other_robot.meleeAttack(cristina.getName());
    cristina.takeDamage(the_other_robot.getMeleeAttackDamage());
    
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    
    the_other_robot.meleeAttack(cristina.getName());
    cristina.takeDamage(the_other_robot.getMeleeAttackDamage());
    
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    
    cristina.beRepaired(25);
    return 0;
}
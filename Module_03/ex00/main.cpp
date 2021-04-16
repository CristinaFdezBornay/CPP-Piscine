/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:44:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/16 10:57:26 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int                 main( void ) {
    std::cout << std::endl << "====== Creating robots ======" << std::endl << std::endl;
    FragTrap cristina("Cristina");
    FragTrap the_other_robot("The other robot");

    std::cout << std::endl << "====== Robots attack ! ======" << std::endl<< std::endl;
    cristina.rangedAttack(the_other_robot.getName());
    the_other_robot.takeDamage(cristina.getRangedAttackDamage());

    the_other_robot.meleeAttack(cristina.getName());
    cristina.takeDamage(the_other_robot.getMeleeAttackDamage());
    
    the_other_robot.meleeAttack(cristina.getName());
    cristina.takeDamage(the_other_robot.getMeleeAttackDamage());
    
    std::cout << std::endl << "====== Random attacksS ======" << std::endl<< std::endl;
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.beRepaired(100);
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    cristina.vaulthunter_dot_exe(the_other_robot.getName());
    
    return 0;
}
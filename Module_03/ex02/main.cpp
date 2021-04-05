/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:44:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 19:58:20 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int                 main( void ) {
    ScavTrap cristina("Cristina");
    FragTrap elvira("Elvira");
    ClapTrap randomRobot1;

    std::cout << "====== Info per Robot ======" << std::endl;
    std::cout << std::endl << "======    CRISTINA    ======" << std::endl;
    std::cout << cristina;
    std::cout << std::endl << "======     ELVIRA     ======" << std::endl;
    std::cout << elvira;
    std::cout << std::endl << "====== RANDOM ROBOT 1 ======" << std::endl;
    std::cout << randomRobot1;
    randomRobot1 = elvira;
    std::cout << randomRobot1;
    std::cout << std::endl << "====== RANDOM ROBOT 2 ======" << std::endl;
    ScavTrap randomRobot2(cristina);
    std::cout << randomRobot2;

    std::cout << std::endl << "====== FIGHTTTTT TIME ======" << std::endl;
    cristina.rangedAttack(elvira.getName());
    elvira.takeDamage(cristina.getRangedAttackDamage());
    
    elvira.meleeAttack(cristina.getName());
    cristina.takeDamage(elvira.getMeleeAttackDamage());
    
    cristina.challengeNewcomer(elvira.getName());
    
    elvira.meleeAttack(cristina.getName());
    cristina.takeDamage(elvira.getMeleeAttackDamage());
    
    cristina.challengeNewcomer(elvira.getName());
    elvira.vaulthunter_dot_exe(cristina.getName());
    cristina.challengeNewcomer(elvira.getName());
    elvira.vaulthunter_dot_exe(cristina.getName());
    cristina.challengeNewcomer(elvira.getName());
    elvira.vaulthunter_dot_exe(cristina.getName());
    cristina.challengeNewcomer(elvira.getName());
    elvira.vaulthunter_dot_exe(cristina.getName());
    
    cristina.beRepaired(25);
    elvira.beRepaired(50);

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:44:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/16 10:57:36 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int                 main( void ) {
    std::cout << std::endl << "====== Creating robots ======" << std::endl << std::endl;
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
    std::cout << std::endl;
    randomRobot1 = elvira;
    std::cout << randomRobot1;

    std::cout << std::endl << "====== FIGHTTTTT TIME ======" << std::endl;
    cristina.rangedAttack(elvira.getName());
    elvira.takeDamage(cristina.getRangedAttackDamage());
    std::cout << std::endl;
    elvira.rangedAttack(cristina.getName());
    cristina.takeDamage(elvira.getRangedAttackDamage());
    std::cout << std::endl;

    elvira.meleeAttack(cristina.getName());
    cristina.takeDamage(elvira.getMeleeAttackDamage());
    std::cout << std::endl;
    cristina.meleeAttack(elvira.getName());
    elvira.takeDamage(cristina.getMeleeAttackDamage());
    std::cout << std::endl;

    cristina.challengeNewcomer(elvira.getName());
    std::cout << std::endl;
    elvira.vaulthunter_dot_exe(cristina.getName());
    std::cout << std::endl;
    cristina.challengeNewcomer(elvira.getName());
    std::cout << std::endl;
    elvira.vaulthunter_dot_exe(cristina.getName());
    std::cout << std::endl;
    cristina.challengeNewcomer(elvira.getName());
    std::cout << std::endl;
    elvira.vaulthunter_dot_exe(cristina.getName());
    std::cout << std::endl;
    cristina.challengeNewcomer(elvira.getName());
    std::cout << std::endl;
    elvira.vaulthunter_dot_exe(cristina.getName());
    std::cout << std::endl;
    
    cristina.beRepaired(25);
    elvira.beRepaired(50);

    return 0;
}
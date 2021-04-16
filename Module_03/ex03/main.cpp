/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:44:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/16 11:00:58 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int                 main( void ) {
    std::cout << std::endl << "====== Creating robots ======" << std::endl << std::endl;
    ScavTrap    cristina("Cristina");
    FragTrap    elvira("Elvira");
    NinjaTrap   bea("Bea");
    ClapTrap    randomRobot;

    std::cout << "====== Info per Robot ======" << std::endl;
    std::cout << std::endl << "======    CRISTINA    ======" << std::endl;
    std::cout << cristina;
    std::cout << std::endl << "======     ELVIRA     ======" << std::endl;
    std::cout << elvira;
    std::cout << std::endl << "======      BEA       ======" << std::endl;
    std::cout << bea;
    std::cout << std::endl << "======  RANDOM ROBOT  ======" << std::endl;
    std::cout << randomRobot;

    std::cout << std::endl << "====== FIGHTTTTT TIME ======" << std::endl;
    cristina.rangedAttack(elvira.getName());
    elvira.takeDamage(cristina.getRangedAttackDamage());
    std::cout << std::endl;
    
    elvira.meleeAttack(bea.getName());
    bea.takeDamage(elvira.getMeleeAttackDamage());
    std::cout << std::endl;
     
    bea.meleeAttack(cristina.getName());
    cristina.takeDamage(bea.getMeleeAttackDamage());
    std::cout << std::endl;

    cristina.challengeNewcomer(elvira.getName());
    std::cout << std::endl;
    elvira.vaulthunter_dot_exe(cristina.getName());
    std::cout << std::endl;
    bea.ninjaShoebox(elvira);
    std::cout << std::endl;
    cristina.challengeNewcomer(elvira.getName());
    std::cout << std::endl;
    elvira.vaulthunter_dot_exe(cristina.getName());
    std::cout << std::endl;
    bea.ninjaShoebox(cristina);
    std::cout << std::endl;
    cristina.challengeNewcomer(elvira.getName());
    std::cout << std::endl;
    elvira.vaulthunter_dot_exe(cristina.getName());
    std::cout << std::endl;
    bea.ninjaShoebox(randomRobot);
    std::cout << std::endl;
    
    cristina.beRepaired(25);
    elvira.beRepaired(50);

    return 0;
}

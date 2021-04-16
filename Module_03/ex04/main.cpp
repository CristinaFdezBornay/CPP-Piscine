/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:44:59 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/16 17:42:28 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int                 main( void ) {
    FragTrap        frag("Frag");
    NinjaTrap       ninja("Ninja");
    std::cout << "====== Info per Robot ======" << std::endl;
    SuperTrap       cristina("Cristina");

    std::cout << std::endl << "====== SUPER CRISTINA ======" << std::endl;
    std::cout << cristina;
    std::cout << std::endl << "======      FRAG      ======" << std::endl;
    std::cout << frag;
    std::cout << std::endl << "======      N1J4      ======" << std::endl;
    std::cout << ninja;
    std::cout << std::endl << "====== FIGHTTTTT TIME ======" << std::endl;
    cristina.rangedAttack(ninja.getName());
    cristina.meleeAttack(frag.getName());
    std::cout << std::endl;
    cristina.vaulthunter_dot_exe(ninja.getName());
    cristina.vaulthunter_dot_exe(ninja.getName());
    cristina.vaulthunter_dot_exe(ninja.getName());
    std::cout << std::endl;

    ClapTrap randomRobot1;
    ScavTrap randomRobot2;
    cristina.ninjaShoebox(randomRobot1);
    cristina.ninjaShoebox(randomRobot2);
    cristina.ninjaShoebox(frag);
    cristina.ninjaShoebox(ninja);
    std::cout << std::endl;
    
    cristina.beRepaired(200);

    return 0;
}
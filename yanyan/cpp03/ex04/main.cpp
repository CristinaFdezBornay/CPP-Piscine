/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:48:32 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/04 17:12:22 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	FragTrap	toto("toto");
	FragTrap	chuck("Chuck");
	ScavTrap	titi("titi");
	ScavTrap	norris("Norris");
	NinjaTrap	tutu("tutu");
	NinjaTrap	rambo("Rambo");
	SuperTrap	wick("John Wick");
	std::cout << std::endl;

	std::cout << "FragTrap" << std::endl;
	chuck.takeDamage(toto.meleeAttack("Chuck"));
	chuck.takeDamage(toto.rangedAttack("Chuck"));
	chuck.takeDamage(toto.meleeAttack("Chuck"));
	chuck.takeDamage(toto.rangedAttack("Chuck"));
	chuck.takeDamage(toto.meleeAttack("Chuck"));
	chuck.takeDamage(toto.rangedAttack("Chuck"));
	chuck.beRepaired(2);
	chuck.beRepaired(1042);
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	toto.beRepaired(0);
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	chuck.takeDamage(toto.vaulthunter_dot_exe("Chuck"));
	std::cout << std::endl;

	std::cout << "ScavTrap" << std::endl;
	norris.takeDamage(titi.meleeAttack("Norris"));
	norris.takeDamage(titi.rangedAttack("Norris"));
	norris.takeDamage(titi.meleeAttack("Norris"));
	norris.takeDamage(titi.rangedAttack("Norris"));
	norris.takeDamage(titi.meleeAttack("Norris"));
	norris.takeDamage(titi.rangedAttack("Norris"));
	norris.beRepaired(2);
	norris.beRepaired(1042);
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	titi.beRepaired(0);
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	norris.takeDamage(titi.challengeNewcomer("Norris"));
	std::cout << std::endl;

	std::cout << "NinjaTrap" << std::endl;
	rambo.takeDamage(tutu.meleeAttack("Norris"));
	rambo.takeDamage(tutu.rangedAttack("Norris"));
	rambo.takeDamage(tutu.meleeAttack("Norris"));
	rambo.takeDamage(tutu.rangedAttack("Norris"));
	rambo.beRepaired(2);
	rambo.beRepaired(1042);
	tutu.ninjaShoebox(ClapTrap("Bob l'eponge rectangle"));
	tutu.ninjaShoebox(norris);
	tutu.ninjaShoebox(toto);
	tutu.ninjaShoebox(tutu);
	std::cout << std::endl;
}

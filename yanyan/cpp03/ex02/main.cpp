/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:48:32 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/14 18:10:18 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	toto("toto");
	FragTrap	chuck("Chuck");
	ScavTrap	titi("titi");
	ScavTrap	norris("Norris");

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
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:48:32 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/14 17:50:58 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	toto("toto");
	FragTrap	chuck("Chuck");

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
}

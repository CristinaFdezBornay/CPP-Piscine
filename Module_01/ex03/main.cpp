/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:42:47 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/13 16:17:10 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int     main( void ) {
    ZombieHorde     *zombieHorde;

    zombieHorde = new ZombieHorde(33);
    zombieHorde->announce();

    delete zombieHorde;
    return 0;
}

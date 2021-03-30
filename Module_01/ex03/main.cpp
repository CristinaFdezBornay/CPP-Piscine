/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:42:47 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:42:48 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int     main( void ) {
    ZombieHorde     *zombieHorde;


    zombieHorde = new ZombieHorde(3);
    zombieHorde->announce();

    delete zombieHorde;
    return 0;
}

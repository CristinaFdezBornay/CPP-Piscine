/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:14:33 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/08 22:52:13 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int     main( void ) {
    Sorcerer    robert("Robert", "the Magnificent");
    Victim      jim("Jimmy");
    Peon        joe("Joe");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

    return 0;
}
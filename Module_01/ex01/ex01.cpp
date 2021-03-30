/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:42:20 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:42:21 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void        memoryLeak( void ) {
    std::string*    panther = new std::string("String panther");

    std::cout << *panther << std::endl;
    delete panther;
    return;
}

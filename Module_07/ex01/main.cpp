/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:55:38 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/07 18:15:24 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"

int             main( void ) {
    int         *a = new int();
    char        *b = new char();

    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    b[0] = 'h';
    b[1] = 'e';
    b[2] = 'l';
    b[3] = 'l';
    b[4] = 'o';

    std::cout << "=== Print element ===" << std::endl;
    ::iter( a, 3, print_element<int> );
    std::cout << std::endl;
    ::iter( b, 5, print_element<char> );
    std::cout << std::endl;

    std::cout << "=== Add 1 element ===" << std::endl;
    ::iter( a, 3, add_one_to_element<int> );
    ::iter( b, 5, add_one_to_element<char> );

    std::cout << "=== Print element ===" << std::endl;
    ::iter( a, 3, print_element<int> );
    std::cout << std::endl;
    ::iter( b, 5, print_element<char> );
    std::cout << std::endl;

    delete a;
    delete b;

    return 0;
}

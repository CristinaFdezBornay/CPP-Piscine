/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:35:28 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/24 15:23:21 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

Base *      generate( void ) {
    Base    *rand_base;
    Base    *base[3] = { new A, new B, new C };

    rand_base = base[std::time(0) % 3];
    if (rand_base != base[0])
        delete base[0];
    if (rand_base != base[1])
        delete base[1];
    if (rand_base != base[2])
        delete base[2];
    return rand_base;
}

void        identify( Base *ptr ) {
    A       *ptr_a;
    B       *ptr_b;
    C       *ptr_c;

    if ((ptr_a = dynamic_cast<A*>(ptr)))
        std::cout << "A" << std::endl;
    if ((ptr_b = dynamic_cast<B*>(ptr)))
        std::cout << "B" << std::endl;
    if ((ptr_c = dynamic_cast<C*>(ptr)))
        std::cout << "C" << std::endl;
}

void        identify( Base &ptr ) {
    A       ref_a;
    B       ref_b;
    C       ref_c;

    try {
        ref_a = dynamic_cast<A&>(ptr);
        std::cout << "A" << std::endl;
    }
    catch (const std::bad_cast& e) {
    }
    try {
        ref_b = dynamic_cast<B&>(ptr);
        std::cout << "B" << std::endl;
    }
    catch (const std::bad_cast& e) {
    }
    try {
        ref_c = dynamic_cast<C&>(ptr);
        std::cout << "C" << std::endl;
    }
    catch (const std::bad_cast& e) {
    }
}

int         main( void ) {
    Base    *base;

    base = generate();
    identify(base);
    identify(*base);
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:50:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/29 18:44:54 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

typedef std::list<int>              l_int;
typedef const unsigned int          c_u_int;

int     main( void ) {
    c_u_int     span_size = 5;
    Span        sp = Span(span_size);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    l_int       sp_list = sp.get_list();

    std::cout << "Printing List      : ";
    for(l_int::iterator it = sp_list.begin(); it != sp_list.end(); it++)
        std::cout << *it << ", ";
    std::cout << std::endl;

    std::cout << "Test Shortest Span : " << sp.shortestSpan() << std::endl;
    std::cout << "Test Longest Span  : " << sp.longestSpan() << std::endl;
    std::cout << "Test Exceed Size   : ";
    try {
        sp.addNumber(0);
    } catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
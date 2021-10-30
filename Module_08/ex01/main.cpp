/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:50:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/30 14:03:39 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    test_subject( void ) {
    c_u_int     span_size = 5;
    Span        span = Span(span_size);

    span.addNumber(5);
    span.addNumber(3);
    span.addNumber(17);
    span.addNumber(9);
    span.addNumber(11);

    span.print_list();
    std::cout << "Test Shortest Span : " << span.shortestSpan() << std::endl;
    std::cout << "Test Longest Span  : " << span.longestSpan() << std::endl;

    return ;
}

void    test_exceptions( void ) {
    c_u_int     span_size = 1;
    Span        span = Span(span_size);
    span.addNumber(42);

    std::cout << "Test 1 element     : ";
    try {
        span.shortestSpan();
    } catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Test Exceed Size   : ";
    try {
        span.addNumber(0);
    } catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }
    return ;
}

void    test_addLooootsOfNumberssssS( void ) {
    c_u_int     span_size = 100;
    Span        span = Span(span_size);

    span.addNumber(1);
    span.addNumber(21);
    span.addLooootsOfNumberssssS(2, 97, 42);
    span.addNumber(1000);

    span.print_list();
    return ;
}

int     main( void ) {
    test_subject();
    test_exceptions();
    test_addLooootsOfNumberssssS();
    return 0;
}
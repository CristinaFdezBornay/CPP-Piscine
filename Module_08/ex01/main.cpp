/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:50:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/11/05 10:59:51 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    test_subject( void ) {
    std::cout << "============ TEST SUBJECT ==========" << std::endl;
    c_u_int     span_capacity = 5;
    Span        span = Span(span_capacity);

    span.addNumber(5);
    span.addNumber(3);
    span.addNumber(17);
    span.addNumber(9);
    span.addNumber(11);

    span.print_list();
    std::cout << "Shortest Span : " << span.shortestSpan() << std::endl;
    std::cout << "Longest Span  : " << span.longestSpan() << std::endl;

    std::cout << std::endl;
    return ;
}

void    test_exceptions( void ) {
    std::cout << "========== TEST EXCEPTIONS =========" << std::endl;
    c_u_int     span_capacity = 1;
    Span        span = Span(span_capacity);
    span.addNumber(42);

    std::cout << "1 element     : ";
    try {
        span.shortestSpan();
    } catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Exceed Size   : ";
    try {
        span.addNumber(0);
    } catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    return ;
}

void    test_addLooootsOfNumberssssS( void ) {
    std::cout << "===== TEST ADD LOST OF NUMBERS =====" << std::endl;
    c_u_int     span_capacity = 100;
    Span        span = Span(span_capacity);

    try {
        span.addNumber(1);
        span.addNumber(21);
        span.addLooootsOfNumberssssS(2, 97, 42);
        span.addNumber(1000);

        span.print_list();
    } catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    return ;
}

int     main( void ) {
    test_subject();
    test_exceptions();
    test_addLooootsOfNumberssssS();
    return 0;
}
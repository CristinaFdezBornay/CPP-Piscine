/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:55:38 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/08 00:44:06 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

void            test_default_constructor( void ) {
    std::cout << std::endl << "1 => TEST DEFAULT CONSTRUCTOR" << std::endl;

    Array< Array<long> >    *array_array = new Array< Array<long> >();
    std::cout << "Size: " << array_array->size() << std::endl;
    delete array_array;
}

void            test_unsigned_int_constructor( void ) {
    std::cout << std::endl << "2 => TEST UNSIGNED INT CONSTRUCTOR" << std::endl;

    Array<float>    *array_float = new Array<float>(3);
    array_float->print(4);
    delete array_float;
}

void            test_copy_constructor( void ) {
    std::cout << std::endl << "3 => TEST COPY CONSTRUCTOR" << std::endl;

    Array<char>     *array_char1 = new Array<char>(3);
    (*array_char1)[0] = 'o';
    (*array_char1)[1] = 'u';
    (*array_char1)[2] = 'i';
    array_char1->print(3);

    Array<char>     *array_char2 = new Array<char>(*array_char1);
    (*array_char1)[0] = 'n';
    (*array_char1)[1] = 'o';
    (*array_char1)[2] = 'n';
    array_char1->print(3);
    array_char2->print(3);

    delete array_char1;
    delete array_char2;
}

void            test_operator_equal( void ) {
    std::cout << std::endl << "4 => OPERATOR EQUAL" << std::endl;

    Array<char>     *array_char1 = new Array<char>(3);
    (*array_char1)[0] = 'o';
    (*array_char1)[1] = 'u';
    (*array_char1)[2] = 'i';
    array_char1->print(3);

    Array<char>     *array_char2 = new Array<char>();
    Array<char>     *tmp;
    tmp = array_char2;
    array_char2 = array_char1;

    (*array_char1)[0] = 'n';
    (*array_char1)[1] = 'o';
    (*array_char1)[2] = 'n';
    array_char1->print(3);
    array_char2->print(3);

    delete array_char1;
    delete tmp;
}

void            test_operator_crochet( void ) {
    std::cout << std::endl << "4 => OPERATOR CROCHET" << std::endl;

    Array<bool>   *array_bool = new Array<bool>(2);
    try {
        std::cout << (*array_bool)[0] << std::endl;
        std::cout << (*array_bool)[1] << std::endl;
        std::cout << (*array_bool)[2] << std::endl;
    } catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }
    delete array_bool;
}

void            test_size( void ) {
    std::cout << std::endl << "6 => SIZE" << std::endl;

    Array<double>   *array_double = new Array<double>(354);
    std::cout << array_double->size() << std::endl;
    delete array_double;
}

int             main( void ) {
    test_default_constructor();
    test_unsigned_int_constructor();
    test_copy_constructor();
    test_operator_equal();
    test_operator_crochet();
    test_size();

    return 0;
}

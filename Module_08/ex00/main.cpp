/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:30:25 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/29 13:26:57 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <iterator>
#include "EasyFind.hpp"

void        test_easyfind(std::list<int> list, int int_to_find) {
    std::cout << "=====================================" << std::endl;
    std::cout << "Find " << int_to_find << " in : ";
    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
        std::cout << *it << ", ";
    std::cout << std::endl;
    try {
        int index = easyfind<std::list<int>, std::list<int>::iterator>(list, int_to_find);
        std::cout << "Index: " << index << std::endl;
    } catch ( std::exception & e ) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << "=====================================" << std::endl;
}

int *       array_end( int *ints ) {
    return ( ints + sizeof(*ints) / sizeof(int) );
}

int         main( void ) {
    int     int_to_find = 42;

    int     with_42[] = { 0, 1, 2, 3, 42 };
    std::list<int> l_with_42( with_42, with_42 + sizeof(with_42) / sizeof(int) );
    test_easyfind(l_with_42, int_to_find);

    int not_42[] = { 0, 1, 2, 3, 4 };
    std::list<int> l_not_42 (not_42, not_42 + sizeof(not_42) / sizeof(int) );
    test_easyfind(l_not_42, int_to_find);

    int empty[] = { };
    std::list<int> l_empty (empty, empty + sizeof(empty) / sizeof(int) );
    test_easyfind(l_empty, int_to_find);

    return 0;
}
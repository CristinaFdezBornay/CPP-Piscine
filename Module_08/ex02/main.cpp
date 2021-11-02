/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:10:14 by crfernan          #+#    #+#             */
/*   Updated: 2021/11/02 09:55:49 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int     main( void ) {
    MutantStack<int>    mstack;

    std::cout << "push(5)" << std::endl;
    mstack.push(5);
    std::cout << "push(17)" << std::endl;
    mstack.push(17);
    std::cout << "mstack.top(): " << mstack.top() <<std::endl;

    std::cout << "pop()" << std::endl;
    mstack.pop();
    std::cout << "mstack.top(): " << mstack.top() << std::endl;
    std::cout << "mstack.size(): " << mstack.size() << std::endl;

    std::cout << "push(3)" << std::endl;
    mstack.push(3);
    std::cout << "push(5)" << std::endl;
    mstack.push(5);
    std::cout << "push(737)" << std::endl;
    mstack.push(737);


    std::cout << "See all stack:" << std::endl;
    for (unsigned long i = 0; i < mstack.size(); i++)
        std::cout << mstack[i] << std::endl;


    std::cout << "Play around with iterators:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << *it << std::endl;
    ++it;
    std::cout << *it << std::endl;
    ++it;
    std::cout << *it << std::endl;
    ++it;
    std::cout << *it << std::endl;

    std::cout << "Go back:" << std::endl;
    std::cout << *it << std::endl;
    --it;
    std::cout << *it << std::endl;
    --it;
    std::cout << *it << std::endl;
    --it;
    std::cout << *it << std::endl;

    std::cout << "Ite: "<< *ite << std::endl;

    std::cout << "The main exercise: " << std::endl;
    it = mstack.begin();
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
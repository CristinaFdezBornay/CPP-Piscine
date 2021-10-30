/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:10:14 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/30 18:52:15 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int     main( void ) {
    MutantStack<int>    mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;

    mstack.pop();
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << *it << std::endl;
    std::cout << *ite << std::endl;

    ++it;
    std::cout << *it << std::endl;

    ++it;
    std::cout << *it << std::endl;

    ++it;
    std::cout << *it << std::endl;
    // --it;

    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    // std::stack<int> s(mstack);

    return 0;
}
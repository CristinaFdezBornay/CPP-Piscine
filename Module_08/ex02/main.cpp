/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:10:14 by crfernan          #+#    #+#             */
/*   Updated: 2021/11/11 02:08:09 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void    test_subject( void ) {
    std::cout << "========== TEST SUBJECT =========" << std::endl;
    MutantStack<int>            mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator  it = mstack.begin();
    MutantStack<int>::iterator  ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
}

void    test_stack_implementation( void ) {
    std::cout << "=== TEST STACK IMPLEMENTATION ===" << std::endl;

    MutantStack<int>    int_stack;
    std::cout << "Empty : " << int_stack.empty() << std::endl;
    std::cout << "Size  : " << int_stack.size() << std::endl;

    std::cout << "=> int_stack.push(42)" << std::endl;
    int_stack.push(42);
    std::cout << "Size  : " << int_stack.size() << std::endl;
    std::cout << "Top   : " << int_stack.top() << std::endl;

    std::cout << "=> int_stack.push(0)" << std::endl;
    int_stack.push(0);
    std::cout << "Size  : " << int_stack.size() << std::endl;
    std::cout << "Top   : " << int_stack.top() << std::endl;

    std::cout << "=> int_stack.pop()" << std::endl;
    int_stack.pop();
    std::cout << "Size  : " << int_stack.size() << std::endl;
    std::cout << "Top   : " << int_stack.top() << std::endl;
}

void    test_operator_crochet( void ) {
    std::cout << "===== TEST OPERATOR CROCHET =====" << std::endl;
    MutantStack<float>   float_stack;

    float_stack.push(0.0f);
    float_stack.push(1.1f);
    float_stack.push(2.2f);

    int len = float_stack.size();

    while (len - 1 >= 0) {
        std::cout << float_stack[len - 1] << std::endl;
        len--;
    }
}

void    test_operator_equal( void ) {
    std::cout << "====== TEST OPERATOR EQUAL ======" << std::endl;
    MutantStack<char>   char_stack;

    std::cout << "=> char_stack.push(\"hello\")" << std::endl;
    char_stack.push('h');
    char_stack.push('e');
    char_stack.push('l');
    char_stack.push('l');
    char_stack.push('o');

    MutantStack<char>   char_stack2;
    std::cout << "=> char_stack2 = char_stack" << std::endl;
    char_stack2 = char_stack;

    std::cout << "=> print char_stack2" << std::endl;
    MutantStack<char>::iterator  it = char_stack2.begin();
    MutantStack<char>::iterator  ite = char_stack2.end();

    while (it != ite) {
        std::cout << *it;
        ++it;
    }
    std::cout << std::endl;
}

int     main( void ) {
    test_subject();
    test_stack_implementation();
    test_operator_crochet();
    test_operator_equal();
}
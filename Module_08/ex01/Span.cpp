/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:53:05 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/30 14:04:12 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( const unsigned int n ) {
    this->_list_ints = l_ints( );
    this->_size = n;
    this->_length = 0;
    return ;
}

Span::Span( void ) {
    return ;
}

Span::Span( Span const & rhs ) {
    *this = rhs;
    return ;
}

Span::~Span( void ) {
    return ;
}

Span &          Span::operator=( Span const & rhs ) {
    this->_list_ints = rhs._list_ints;
    this->_size = rhs._size;
    this->_length = rhs._length;
    return *this;
}

void            Span::_print_element( int element ) {
    std::cout << element << ", ";
    return ;
}

void            Span::print_list( void ) {
    iterator    it_begin = this->_list_ints.begin();
    iterator    it_end = this->_list_ints.end();

    std::cout << "Printing List      : ";
    for_each(it_begin, it_end, Span::_print_element);
    std::cout << "[ Len: " << this->_length << ", Size: " << this->_size << " ]" << std::endl;
    return ;
}

void            Span::addNumber( int i ) {
    if ( this->_length == this->_size )
        throw( std::out_of_range("Out of range.") );
    this->_list_ints.push_back(i);
    this->_length += 1;
    return ;
}

void            Span::addLooootsOfNumberssssS( uint position, uint number_to_add, int value ) {
    if ( this->_length + number_to_add > this->_size )
        throw( std::out_of_range("Out of range.") );

    if ( position > this->_length )
        throw( std::out_of_range("Out of range.") );

    iterator    it;
    for (it = this->_list_ints.begin(); position; position--)
        it++;

    this->_list_ints.insert(it, number_to_add, value);
    this->_length += number_to_add;
    return ;
}

int             Span::shortestSpan( void ) {
    if ( this->_length < 2 )
        throw( std::out_of_range("Not enough values.") );

    l_ints      sorted_list = l_ints(this->_list_ints);

    sorted_list.sort();

    iterator    it_begin = sorted_list.begin();
    int         min = *( it_begin );
    int         second_min = *( it_begin.operator++() );

    return second_min - min;
}

int             Span::longestSpan( void ) {
    if ( this->_length < 2 )
        throw( std::out_of_range("Not enough values.") );

    iterator    it_begin = this->_list_ints.begin();
    iterator    it_end = this->_list_ints.end();
    iterator    it_min = std::min_element(it_begin, it_end);
    iterator    it_max = std::max_element(it_begin, it_end);

    return (*it_max - *it_min);
}

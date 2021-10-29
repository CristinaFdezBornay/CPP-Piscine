/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:53:05 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/29 18:45:48 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
typedef std::list<int>::iterator iterator;

Span::Span( const unsigned int n ) {
    this->_list_ints = std::list<int>( );
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

std::list<int>  Span::get_list( void ) {
    return this->_list_ints;
}

void            Span::addNumber( int i ) {
    if ( this->_length == this->_size )
        throw( std::out_of_range("Out of range.") );
    this->_list_ints.push_back(i);
    this->_length += 1;
    return ;
}

int             Span::shortestSpan( void ) {
    int         min = this->_get_min();
    int         shortestSpan = INT_MAX;
    iterator    it_end = this->_list_ints.end();

    for (iterator it = this->_list_ints.begin(); it != it_end; it++)
        if (*it - min != 0 && *it - min < shortestSpan)
            shortestSpan = *it - min;

    return shortestSpan;
}

int             Span::longestSpan( void ) {
    int         min = this->_get_min();
    int         longestSpan = INT_MIN;
    iterator    it_end = this->_list_ints.end();

    for (iterator it = this->_list_ints.begin(); it != it_end; it++)
        if (*it - min > longestSpan)
            longestSpan = *it - min;

    return longestSpan;
}

int             Span::_get_min( void ) {
    int         min = INT_MAX;
    iterator    it_end = this->_list_ints.end();

    for (iterator it = this->_list_ints.begin(); it != it_end; it++)
        if (*it < min)
            min = *it;
    return min;
}

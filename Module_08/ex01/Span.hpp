/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:53:41 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/30 13:58:10 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN
# define SPAN

# include <list>
# include <iostream>

typedef std::list<int>              l_ints;
typedef std::list<int>::iterator    iterator;
typedef const unsigned int          c_u_int;

class       Span {
    public:
        Span( void );
        Span( Span const & rhs );
        Span( c_u_int n );
        virtual ~Span( void );

        Span &          operator=( Span const & rhs );

        void            print_list( void );

        void            addNumber( int i );
        void            addLooootsOfNumberssssS( uint position, uint number_to_add, int value );

        int             shortestSpan( void );
        int             longestSpan( void );

    private:
        static void     _print_element( int element );
        l_ints          _list_ints;
        unsigned int    _size;
        unsigned int    _length;
};

#endif
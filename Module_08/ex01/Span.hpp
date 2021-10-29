/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:53:41 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/29 18:48:14 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN
# define SPAN

# include <list>
# include <iostream>

class       Span {
    public:
        Span( void );
        Span( Span const & rhs );
        Span( const unsigned int n );
        virtual ~Span( void );

        Span &          operator=( Span const & rhs );

        std::list<int>  get_list( void );

        void            addNumber( int i );
        int             shortestSpan( void );
        int             longestSpan( void );

        void            addLooootsOfNumberssssS( int i );

    private:
        std::list<int>  _list_ints;
        unsigned int    _size;
        unsigned int    _length;
        int             _get_min( void );
};

#endif
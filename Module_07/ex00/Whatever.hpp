/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:21:24 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/07 18:27:28 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER
# define WHATEVER

# include <iostream>

template< typename T >
void    swap( T & a, T & b ){
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template< typename T >
T       min( T const & a, T const & b ){
    if (a < b)
        return a;
    return b;
}

template< typename T >
T       max( T const & a, T const & b ){
    if (a > b)
        return a;
    return b;
}

#endif
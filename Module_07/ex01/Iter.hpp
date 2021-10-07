/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:55:42 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/07 18:25:41 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER
# define ITER

# include <iostream>

template< typename T >
void        print_element( T & i ){
    std::cout << i;
}

template< typename T >
void        add_one_to_element( T & i ){
    i = i + 1;
}

template< typename T >
void        iter( T * a, int len, void(ft)(T & i) ) {
    for( int i = 0; i < len; ++i )
        ft( a[i] );
}

#endif
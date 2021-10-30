/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:30:27 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/30 12:26:02 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND
# define EASY_FIND

# include <iostream>
# include <algorithm>

template< typename T, class iterator >
int        easyfind( T container, int int_to_find ) {
    if (container.empty())
        throw( std::out_of_range("List is empty.") );

    iterator it_int_found = std::find(container.begin(), container.end(), int_to_find);

    if ( it_int_found == container.end() )
        throw( std::out_of_range("Int not found on the list.") );

    return std::distance( container.begin(), it_int_found );
}

#endif
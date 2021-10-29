/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:30:27 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/29 12:32:23 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND
# define EASY_FIND

# include <iostream>

template< typename T, class iterator >
int        easyfind( T container, int int_to_find ) {
    if (container.empty())
        throw( std::out_of_range("List is empty.") );

    for (iterator it = container.begin(); it != container.end(); it++)
        if (*it == int_to_find)
            return std::distance(container.begin(), it);
    
    throw( std::out_of_range("Int not found on the list.") );
}

#endif
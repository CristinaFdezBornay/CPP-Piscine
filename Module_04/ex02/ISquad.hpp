/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 23:16:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/26 17:59:01 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class       ISquad {
    public:
        virtual                 ~ISquad( void ) { return ; };
        virtual void            setCount( int input ) = 0;
        virtual int             getCount( void ) const = 0;
        virtual ISpaceMarine*   getUnit( int index ) const = 0;
        virtual int             push( ISpaceMarine *src ) = 0;
};

#endif
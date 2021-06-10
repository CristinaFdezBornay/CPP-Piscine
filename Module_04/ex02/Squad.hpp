/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 23:16:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 14:38:24 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class       Squad : public ISquad {
    public:
        Squad( void );
        virtual ~Squad( void );
        Squad( Squad const & rhs );

        void                    setCount( int input );
        void                    setMarines( ISpaceMarine** input );
        int                     getCount( void ) const;
        ISpaceMarine**          getMarines( void ) const;
        ISpaceMarine*           getUnit( int index ) const;
        int                     push( ISpaceMarine *src );

        Squad &                 operator=( Squad const & rhs );

    private:
        static int              _count;
        ISpaceMarine**          _marines;
};

#endif
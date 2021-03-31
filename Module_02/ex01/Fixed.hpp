/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:30:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/31 17:59:15 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class       Fixed {
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed( const int nbr );
        Fixed( const float nbr );
        Fixed( Fixed const & src );

        Fixed &             operator=( Fixed const & rhs );

        int                 getRawBits( void ) const;
        void                setRawBits( int const raw );

        float               tofloat( void )const;
        int                 toInt( void )const;

    private:
        int                 _fpv;
        static const int    _nbrFractBits;
};

std::ostream &     operator<<( std::ostream & o, Fixed const & i );

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:30:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/31 18:00:18 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class       Fixed {
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed( Fixed const & src );

        Fixed &             operator=(Fixed const & rhs );

        int                 getRawBits( void ) const;
        void                setRawBits( int const raw );

    private:
        int                 _fpv;
        static const int    _nbrFractBits = 8;
};

#endif
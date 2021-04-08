/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:00:07 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/09 01:01:05 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon {
    public:
        PowerFist( void );
        // PowerFist( PowerFist const & rhs );
        // ~PowerFist( void );

        // PowerFist &   operator=( PowerFist const & rhs );

        void            attack( void ) const;
};

#endif
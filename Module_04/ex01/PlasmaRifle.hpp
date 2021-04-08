/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:28:37 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/09 00:57:25 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
    public:
        PlasmaRifle( void );
        // PlasmaRifle( PlasmaRifle const & rhs );
        // ~PlasmaRifle( void );

        // PlasmaRifle &   operator=( PlasmaRifle const & rhs );

        void            attack( void ) const;
};

#endif
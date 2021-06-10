/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:00:07 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 11:58:27 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon {
    public:
        PowerFist( void );
        virtual ~PowerFist( void );

        void            attack( void ) const;
};

#endif
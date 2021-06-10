/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnotherWeapon.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:28:37 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 13:01:57 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANOTHERWEAPON_HPP
# define ANOTHERWEAPON_HPP

# include "AWeapon.hpp"

class AnotherWeapon : public AWeapon {
    public:
        AnotherWeapon( void );
        virtual ~AnotherWeapon( void );

        void            attack( void ) const;
};

#endif
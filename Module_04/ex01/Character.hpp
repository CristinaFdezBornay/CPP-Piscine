/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:23:55 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/11 00:43:23 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"

class       Character {
    public:
        Character( std::string const & name );
        ~Character( void );

        void            setName( std::string input );
        void            setActionPoints( int input );
        std::string     getName( void ) const;
        int             getActionPoints( void ) const;

        void            recoverAP( void );
        void            equip( AWeapon *weapon );
        void            attack( Enemy *enemy );

    private:
        Character( void );
        std::string     _name;
        int             _actionPoints;
        AWeapon         *wepon;
};

#endif
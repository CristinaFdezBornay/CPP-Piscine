/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:23:55 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 12:30:58 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
#include "Enemy.hpp"

class       Character {
    public:
        Character( std::string const & name );
        virtual ~Character( void );

        void            setName( std::string input );
        void            setActionPoints( int input );
        void            setWeapon( AWeapon *input );
        std::string     getName( void ) const;
        int             getActionPoints( void ) const;
        AWeapon         *getWeapon( void ) const;

        void            recoverAP( void );
        void            equip( AWeapon *weapon );
        void            attack( Enemy *enemy );

        Character &     operator=( Character const & rhs );

    private:
        Character( void );
        std::string     _name;
        int             _actionPoints;
        AWeapon         *_weapon;
};

std::ostream &     operator<<( std::ostream & o, Character const & src );

#endif
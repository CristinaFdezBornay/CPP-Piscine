/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:43:42 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/17 22:47:07 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class AWeapon {
    public:
        AWeapon( std::string const & name, int apcost, int damage );
        AWeapon( AWeapon const & rhs );
        virtual ~AWeapon( void );

        void            setName( std::string input );
        void            setAPCost( int input );
        void            setDamage( int input );
        std::string     getName( void ) const;
        int             getAPCost( void ) const;
        int             getDamage( void ) const;

        AWeapon &       operator=( AWeapon const & rhs );

        virtual void    attack( void ) const = 0;
    
    private:
        AWeapon( void );
        std::string     _name;
        int             _apCost;
        int             _damage;
};

std::ostream &     operator<<( std::ostream & o, AWeapon const & src );

#endif
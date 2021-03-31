/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:43:37 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/31 18:00:07 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB {
    public:
        HumanB( std::string name );
        ~HumanB( void );

        std::string getName( void ) const;

        void        setWeapon( Weapon &weapon );
        Weapon      *getWeapon( void ) const;

        void        attack( void ) const;
    
    private:
        std::string _name;
        Weapon      *_weapon;
};

#endif
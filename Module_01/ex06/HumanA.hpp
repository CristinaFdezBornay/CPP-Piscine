/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:43:32 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/13 16:36:28 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA {
    public:
        HumanA( std::string name, Weapon &weapon );
        ~HumanA( void );

        std::string getName( void ) const;
        Weapon      &getWeapon( void ) const;

        void        attack( void ) const;
    
    private:
        std::string _name;
        Weapon      &_weapon;
};

#endif
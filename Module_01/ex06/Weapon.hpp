/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:43:48 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:43:48 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {
    public:
        Weapon( void );
        Weapon( std::string type );
        ~Weapon( void );

        void                setType( std::string type );
        const std::string   &getType( void ) const;
    
    private:
        std::string         _type;

};

#endif
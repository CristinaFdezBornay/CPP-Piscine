/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:51:04 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/17 22:55:56 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class       SuperMutant : public Enemy {
    public:
        SuperMutant( void );
        ~SuperMutant( void );

        void    takeDamage( int damage );
};

#endif
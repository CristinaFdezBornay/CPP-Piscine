/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 23:54:01 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/23 00:23:31 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>

class ISpaceMarine {
    public:
        virtual                 ~ISpaceMarine( void ) { return ; };
        virtual ISpaceMarine*   clone( void ) const = 0;
        virtual void            battleCry( void ) const = 0;
        virtual void            rangedAttack( void ) const = 0;
        virtual void            meleeAttack( void ) const = 0;
};

#endif
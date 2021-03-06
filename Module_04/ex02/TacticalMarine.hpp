/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:18:06 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 14:50:18 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

#include "ISpaceMarine.hpp"

class  TacticalMarine : public ISpaceMarine {
    public:
        TacticalMarine( void );
        virtual ~TacticalMarine( void );
        TacticalMarine( TacticalMarine const & rhs );

        TacticalMarine*         clone( void ) const;
        void                    battleCry( void ) const;
        void                    rangedAttack( void ) const;
        void                    meleeAttack( void ) const;

        TacticalMarine &        operator=( TacticalMarine const & rhs );
};

#endif
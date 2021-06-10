/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:18:06 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 14:50:28 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
    public:
        AssaultTerminator( void );
        virtual ~AssaultTerminator( void );
        AssaultTerminator( AssaultTerminator const & rhs );

        AssaultTerminator*      clone( void ) const;
        void                    battleCry( void ) const;
        void                    rangedAttack( void ) const;
        void                    meleeAttack( void ) const;

        AssaultTerminator &     operator=( AssaultTerminator const & rhs );
};

#endif
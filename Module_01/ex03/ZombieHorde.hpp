/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:43:08 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/31 18:00:07 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class       ZombieHorde {
    public:
        ZombieHorde( int N );
        ~ZombieHorde( void );

        void        setNumberZombies( int N );
        int         getNumberZombies( void ) const;

        void        setZombies( Zombie *zombies );
        Zombie      *getZombies( void ) const;

        void        announce( void ) const;

    private:
        int         _numberZombies;
        Zombie      *_zombies;
};

#endif
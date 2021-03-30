/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:42:38 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:42:38 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

# include "Zombie.hpp"

class       ZombieEvent {
    public:
        ZombieEvent( void );
        ~ZombieEvent( void );

        void        setZombieType( void );
        std::string getZombieType( void ) const;

        Zombie      *newZombie( std::string name ) const ;
        Zombie      *randomChump( void ) const ;

    private:
        std::string _zombieType;
};

#endif
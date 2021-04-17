/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:51:04 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/17 23:05:22 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class       Enemy {
    public:
        Enemy( int hp, std::string const & type );
        Enemy( Enemy const & rhs );
        virtual ~Enemy( void );

        void            setType( std::string input );
        void            setHitPoints( int input );
        std::string     getType( void ) const;
        int             getHitPoints( void ) const;

        Enemy &         operator=( Enemy const & rhs );
        virtual void    takeDamage( int damage );

    private:
        Enemy( void );
        std::string     _type;
        int             _hitPoints;
};

#endif
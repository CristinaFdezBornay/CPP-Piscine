/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:30:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/31 23:59:08 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cmath>

class       FragTrap {
    public:
        FragTrap( void );
        ~FragTrap( void );
        FragTrap( std::string name );
        FragTrap( FragTrap const & src );

        void                setName( std::string input );
        void                setLevel( int input );
        void                setHitPoints( int input );
        void                setEnerygyPoints( int input );
        void                setMaxEnerygyPoints( int input );
        void                setMeleeAtackDamage( int input );
        void                setRangedAtackDamage( int input );
        void                setArmorAtackDamage( int input );

        std::string         getName( void ) const;
        int                 getLevel( void ) const;
        int                 getHitPoints( void ) const;
        int                 getEnerygyPoints( void ) const;
        int                 getMaxEnerygyPoints( void ) const;
        int                 getMeleeAtackDamage( void ) const;
        int                 getRangedAtackDamage( void ) const;
        int                 getArmorAtackDamage( void ) const;

        FragTrap &          operator=( FragTrap const & rhs );

        // void                rangedAttack( std::string const & target );
        // void                meleeAttack( std::string const & target );
        // void                vaulthunter_dot_exe( std::string const & target );
        // void                takeDamage( unsigned int amount );
        // void                beRepaired( unsigned int amount );

    private:
        std::string         _name;
        int                 _level;
        int                 _hitPoints;
        int                 _energyPoints;
        int                 _maxEnergyPoints;
        int                 _meleeAtackDamage;
        int                 _rangedAtackDamage;
        int                 _armorAtackDamage;
};

std::ostream &     operator<<( std::ostream & o, FragTrap const & src );

#endif
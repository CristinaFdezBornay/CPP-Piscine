/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:48:08 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 22:39:22 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <cmath>

class       ClapTrap {
    public:
        ClapTrap( void );
        ~ClapTrap( void );
        ClapTrap( std::string name, int level, int hitPoints, int maxHitPoints,
            int energyPoints, int maxEnergyPoints, int meleeAttackDamage,
            int rangedAttackDamage, int armorDamageReduction );
        ClapTrap( ClapTrap const & src );

        ClapTrap &          operator=( ClapTrap const & rhs );

        void                rangedAttack( std::string const & target );
        void                meleeAttack( std::string const & target );
        void                takeDamage( unsigned int amount );
        void                beRepaired( unsigned int amount );

        void                setName( std::string input );
        void                setLevel( int input );
        void                setHitPoints( int input );
        void                setMaxHitPoints( int input );
        void                setEnergyPoints( int input );
        void                setMaxEnergyPoints( int input );
        void                setMeleeAttackDamage( int input );
        void                setRangedAttackDamage( int input );
        void                setArmorDamageReduction( int input );

        std::string         getName( void ) const;
        int                 getLevel( void ) const;
        int                 getHitPoints( void ) const;
        int                 getMaxHitPoints( void ) const;
        int                 getEnergyPoints( void ) const;
        int                 getMaxEnergyPoints( void ) const;
        int                 getMeleeAttackDamage( void ) const;
        int                 getRangedAttackDamage( void ) const;
        int                 getArmorDamageReduction( void ) const;

    private:
        std::string         _name;
        int                 _level;
        int                 _hitPoints;
        int                 _maxHitPoints;
        int                 _energyPoints;
        int                 _maxEnergyPoints;
        int                 _meleeAttackDamage;
        int                 _rangedAttackDamage;
        int                 _armorDamageReduction;
};

std::ostream &     operator<<( std::ostream & o, ClapTrap const & src );

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:22:55 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 17:17:01 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <cmath>

class       ScavTrap {
    public:
        ScavTrap( void );
        ~ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & src );

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

        ScavTrap &          operator=( ScavTrap const & rhs );

        void                rangedAttack( std::string const & target );
        void                meleeAttack( std::string const & target );
        void                challengeNewcomer( std::string const & target );
        void                takeDamage( unsigned int amount );
        void                beRepaired( unsigned int amount );

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

std::ostream &     operator<<( std::ostream & o, ScavTrap const & src );

#endif
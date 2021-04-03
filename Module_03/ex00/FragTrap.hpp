/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:30:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/03 23:44:42 by crfernan         ###   ########.fr       */
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

        FragTrap &          operator=( FragTrap const & rhs );

        void                rangedAttack( std::string const & target );
        void                meleeAttack( std::string const & target );
        void                vaulthunter_dot_exe( std::string const & target );
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

std::ostream &     operator<<( std::ostream & o, FragTrap const & src );

#endif
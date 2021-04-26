/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:15:46 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/26 21:10:37 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {
    public:
        Character( void );
        Character( std::string name );
        Character( Character const & src );
        virtual ~Character( void ) { return ; };

        void                    setName( std::string const & input );
        std::string const &     getName( void ) const;
        void                    equip( AMateria* m );
        void                    unequip( int idx );
        void                    use( int idx, ICharacter& target );

        Character &             operator=( AMateria const & rhs );
    
    private:
        std::string const &     _name;
        AMateria                _materia[4];
};

#endif
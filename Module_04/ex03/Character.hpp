/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:15:46 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/29 00:27:59 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : virtual public ICharacter {
    public:
        Character( void );
        Character( std::string name );
        Character( Character const & src );
        virtual ~Character( void );

        void                            setName( std::string const & input );
        void                            setMateria( AMateria **input );
        void                            setNbrMateria( int input );
        virtual std::string const &     getName( void ) const;
        AMateria                        **getMateria( void ) const;
        int                             getNbrMateria( void ) const;

        virtual void                    equip( AMateria* input );
        virtual void                    unequip( int index );
        virtual void                    use( int index, ICharacter& target );

        Character &                     operator=( Character const & rhs );
    
    private:
        std::string                     _name;
        AMateria                        **_materia;
        int                             _nbrMateria;
};

#endif
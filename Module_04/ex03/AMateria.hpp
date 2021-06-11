/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:36:17 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/11 12:11:25 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria {
    public:
        AMateria( void );
        AMateria( std::string const & type );
        AMateria( AMateria const & type );
        virtual ~AMateria( void );

        void                        setType( std::string const &input );
        void                        setXP( unsigned int input );
        std::string const &         getType( void ) const;
        unsigned int                getXP( void ) const;

        virtual AMateria*           clone( void ) const = 0;
        virtual void                use( ICharacter& target );

        AMateria &                  operator=( AMateria const & rhs );

    protected:
        unsigned int                _xp;
        std::string                 _type;
};

#endif

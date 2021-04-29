/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 23:48:27 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/29 10:44:00 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource {
    public:
        MateriaSource( void );
        MateriaSource( MateriaSource const & src );
        ~MateriaSource( void );

        void                    setMateria( AMateria *materias );
        void                    setNbrMateria( int input );
        AMateria                *getMateria( int index ) const;
        int                     getNbrMateria( void ) const;

        virtual void            learnMateria( AMateria *input );
        virtual AMateria *      createMateria( std::string const & type );
    
    private:
        AMateria                *_materias[4];
        int                     _nbrMateria;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 23:48:27 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/29 00:02:14 by crfernan         ###   ########.fr       */
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

        void                    setMaterias( AMateria **materias );
        AMateria                **getMaterias( void ) const;

        virtual void            learnMateria( AMateria *input );
        virtual AMateria *      createMateria( std::string const & type );
    
    private:
        AMateria **             _materias;
};

#endif
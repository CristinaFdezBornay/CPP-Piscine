/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 23:48:27 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/28 23:25:18 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource {
    public:
        virtual ~IMateriaSource( void ) { return ; };

        virtual void            learnMateria( AMateria* input ) = 0;
        virtual AMateria *      createMateria( std::string const & type ) = 0;
};

#endif
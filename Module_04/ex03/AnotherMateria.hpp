/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnotherMateria.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:01:06 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/11 12:21:25 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANOTHERMATERIA_HPP
# define ANOTHERMATERIA_HPP

# include "AMateria.hpp"

class AnotherMateria : public AMateria {
    public:
        AnotherMateria( void );
        virtual ~AnotherMateria( void );

        virtual AnotherMateria*   clone( void ) const;
        virtual void    use( ICharacter& target );
};

#endif
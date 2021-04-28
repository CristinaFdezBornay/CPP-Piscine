/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:01:06 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/29 00:17:03 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure( void );
        ~Cure( void );

        virtual Cure*   clone( void ) const;
        virtual void    use( ICharacter& target );
};

#endif
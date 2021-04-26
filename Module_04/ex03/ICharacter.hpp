/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:15:46 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/26 20:17:43 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class ICharacter {
    public:
        virtual ~ICharacter( void ) { return ; };

        virtual std::string const &     getName( void ) const = 0;
        virtual void                    equip( AMateria* m ) = 0;
        virtual void                    unequip( int idx ) = 0;
        virtual void                    use( int idx, ICharacter& target ) = 0;
};

#endif
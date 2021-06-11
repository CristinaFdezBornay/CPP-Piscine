/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:03:36 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/11 10:32:09 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class       Victim {
    public:
        virtual ~Victim( void );
        Victim( std::string name );
        Victim( Victim const & src );

        void                setName( std::string input );
        std::string         getName( void ) const;

        Victim &            operator=( Victim const & rhs );
        void                getPolymorphed( void ) const;

    private:
        Victim( void );
        std::string         _name;
};

std::ostream &     operator<<( std::ostream & o, Victim const & src );

#endif
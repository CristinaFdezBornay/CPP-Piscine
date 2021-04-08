/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:03:36 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/08 23:15:43 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class       Sorcerer {
    public:
        ~Sorcerer( void );
        Sorcerer( std::string name, std::string title );
        Sorcerer( Sorcerer const & src );

        void                setName( std::string input );
        void                setTitle( std::string input );

        std::string         getName( void ) const;
        std::string         getTitle( void ) const;

        Sorcerer &          operator=( Sorcerer const & rhs );
        void                polymorph( Victim const & rhs ) const;

    private:
        Sorcerer( void );

        std::string         _name;
        std::string         _title;
};

std::ostream &     operator<<( std::ostream & o, Sorcerer const & src );

#endif
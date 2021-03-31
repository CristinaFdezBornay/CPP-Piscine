/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:42:12 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/31 18:00:07 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class       Pony {
    public:
        Pony( std::string name );
        ~Pony( void );

        void        setName( std::string name );
        std::string getName( void ) const;

        void        setNumberCarrotsEaten( int carrots );
        int         getNumberCarrotsEaten( void ) const;

        void        run( std::string distance ) const;
        void        eat_carrots( void );

    private:
        std::string _name;
        int         _numberCarrotsEaten;
};

#endif
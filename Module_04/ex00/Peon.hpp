/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:42:05 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/11 10:33:13 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class       Peon : public Victim {
    public:
        virtual ~Peon( void );
        Peon( std::string name );

        void    getPolymorphed( void ) const;

    private:
        std::string     _name;
};

#endif
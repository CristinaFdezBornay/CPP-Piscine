/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:42:05 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/08 23:20:29 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class       Peon : public Victim {
    public:
        ~Peon( void );
        Peon( std::string name );

        virtual void    getPolymorphed( void ) const;

    private:
        std::string     _name;
};

#endif
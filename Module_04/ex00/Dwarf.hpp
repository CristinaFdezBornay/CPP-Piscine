/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dwarf.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:42:05 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 11:18:09 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DWARF_HPP
# define DWARF_HPP

# include <iostream>
# include "Victim.hpp"

class       Dwarf : public Victim {
    public:
        virtual ~Dwarf( void );
        Dwarf( std::string name );

        void    getPolymorphed( void ) const;

    private:
        std::string     _name;
};

#endif
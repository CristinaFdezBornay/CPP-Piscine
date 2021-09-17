/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OtherVictim.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:42:05 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/17 10:26:40 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_VICTIM_HPP
# define OTHER_VICTIM_HPP

# include <iostream>
# include "Victim.hpp"

class       OtherVictim : public Victim {
    public:
        virtual ~OtherVictim( void );
        OtherVictim( std::string name );

        void    getPolymorphed( void ) const;

    private:
        std::string     _name;
};

#endif
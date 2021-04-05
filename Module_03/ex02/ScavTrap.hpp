/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:22:55 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 19:38:36 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>
# include <cmath>

class       ScavTrap : public ClapTrap {
    public:
        ScavTrap( void );
        ~ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & src );

        void                challengeNewcomer( std::string const & target );
};

#endif
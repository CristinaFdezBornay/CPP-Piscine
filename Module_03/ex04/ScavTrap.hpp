/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:22:55 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/07 00:40:18 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class       ScavTrap : virtual public ClapTrap {
    public:
        ScavTrap( void );
        ~ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & src );

        void                challengeNewcomer( std::string const & target );
};

#endif
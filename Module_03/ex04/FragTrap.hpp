/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:30:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/16 16:30:55 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <cmath>

class       FragTrap : virtual public ClapTrap {
     public:
        FragTrap( void );
        ~FragTrap( void );
        FragTrap( std::string name );
        FragTrap( FragTrap const & src );

        void                rangedAttack( std::string const & target );
        void                meleeAttack( std::string const & target );

        void                vaulthunter_dot_exe( std::string const & target );
};

#endif
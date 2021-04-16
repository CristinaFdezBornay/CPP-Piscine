/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:22:55 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 23:33:39 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class       SuperTrap : public FragTrap, public NinjaTrap {
    public:
        SuperTrap( void );
        ~SuperTrap( void );
        SuperTrap( std::string name );
        SuperTrap( SuperTrap const & src );

        void                rangedAttack( std::string const & target );
        void                meleeAttack( std::string const & target );
};

#endif
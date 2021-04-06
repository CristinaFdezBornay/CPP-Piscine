/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 23:12:14 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/07 00:40:19 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJARAP_HPP
# define NINJARAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class       NinjaTrap : virtual public ClapTrap{
     public:
        NinjaTrap( void );
        ~NinjaTrap( void );
        NinjaTrap( std::string name );
        NinjaTrap( NinjaTrap const & src );

        void                ninjaShoebox( ClapTrap const & src );
        void                ninjaShoebox( FragTrap const & src );
        void                ninjaShoebox( ScavTrap const & src );
        void                ninjaShoebox( NinjaTrap const & src );
};

#endif
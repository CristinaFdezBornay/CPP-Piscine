/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:30:18 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/05 23:33:27 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class       FragTrap : public ClapTrap{
     public:
        FragTrap( void );
        ~FragTrap( void );
        FragTrap( std::string name );
        FragTrap( FragTrap const & src );

        void                vaulthunter_dot_exe( std::string const & target );
};

#endif
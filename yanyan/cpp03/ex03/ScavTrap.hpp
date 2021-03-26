/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:51:08 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/15 17:37:34 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

	ScavTrap(std::string name);
	~ScavTrap(void);
	unsigned int		challengeNewcomer(std::string const & target);
};

#endif

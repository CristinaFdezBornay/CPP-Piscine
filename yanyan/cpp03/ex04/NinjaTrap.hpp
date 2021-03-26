/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:58:28 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/05 01:10:43 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class	SuperTrap;

class	NinjaTrap : public virtual ClapTrap
{
	public:

	NinjaTrap(std::string name);
	~NinjaTrap(void);

	void		ninjaShoebox(const ClapTrap&);
	void		ninjaShoebox(const FragTrap&);
	void		ninjaShoebox(const ScavTrap&);
	void		ninjaShoebox(const NinjaTrap&);
	void		ninjaShoebox(const SuperTrap&);
};

#endif

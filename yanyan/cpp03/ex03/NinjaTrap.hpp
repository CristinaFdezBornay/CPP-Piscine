/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:58:28 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/04 17:01:41 by hexa             ###   ########.fr       */
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

class	NinjaTrap : public virtual ClapTrap
{
	public:

	NinjaTrap(std::string name);
	~NinjaTrap(void);

	void		ninjaShoebox(const ClapTrap&);
	void		ninjaShoebox(const FragTrap&);
	void		ninjaShoebox(const ScavTrap&);
	void		ninjaShoebox(const NinjaTrap&);
};

#endif

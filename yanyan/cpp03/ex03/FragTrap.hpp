/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:51:12 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/15 17:37:21 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:

	FragTrap(std::string name);
	~FragTrap(void);
	unsigned int		vaulthunter_dot_exe(std::string const & target);
};

#endif

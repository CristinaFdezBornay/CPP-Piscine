/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:47:20 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/15 18:52:09 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include <iostream>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
	public:

	SuperTrap(std::string name);
	~SuperTrap(void);
};

#endif

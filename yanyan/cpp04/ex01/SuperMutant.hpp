/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:20:45 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/20 16:03:24 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class	SuperMutant : public Enemy
{

	public:
	SuperMutant(int hp = 170, std::string const & type = "Super Mutant");
	SuperMutant(const SuperMutant& old);
	SuperMutant&	operator = (const SuperMutant& copy);
	~SuperMutant(void);
	void	takeDamage(int damage);
};

#endif

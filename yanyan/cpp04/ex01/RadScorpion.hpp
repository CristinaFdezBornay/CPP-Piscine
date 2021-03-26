/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:26:53 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/08 18:56:59 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
	RadScorpion(int hp = 80, std::string const & type = "RadScorpion");
	RadScorpion(const RadScorpion& old);
	RadScorpion&	operator = (const RadScorpion& copy);
	virtual ~RadScorpion(void);
};

#endif

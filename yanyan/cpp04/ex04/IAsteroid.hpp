/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 02:03:20 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 03:04:17 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <iostream>

class	DeepCoreMiner;
class	StripMiner;

class	IAsteroid
{
	public:
		virtual		~IAsteroid() {}
		virtual std::string		beMined(DeepCoreMiner*) const = 0;
		virtual std::string		beMined(StripMiner*) const = 0;
		virtual std::string		getName() const = 0;
};

#endif

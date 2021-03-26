/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 02:29:46 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:34:18 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include "IAsteroid.hpp"

class DeepCoreMiner;
class StripMiner;

class Asteroid : public IAsteroid
{
	public:
		Asteroid(void);
		Asteroid(const Asteroid & src);
		~Asteroid(void);

		Asteroid & operator=(const Asteroid & src);

		std::string beMined(DeepCoreMiner* laser) const;
		std::string beMined(StripMiner* laser) const;
		std::string getName(void) const;
};

#endif

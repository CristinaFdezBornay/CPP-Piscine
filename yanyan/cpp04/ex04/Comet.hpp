/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 02:29:46 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:30:10 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMET_HPP
# define COMET_HPP

# include "IAsteroid.hpp"

class DeepCoreMiner;
class StripMiner;

class Comet : public IAsteroid
{
	public:
		Comet(void);
		Comet(const Comet & src);
		~Comet(void);

		Comet & operator=(const Comet & src);

		std::string beMined(DeepCoreMiner* laser) const;
		std::string beMined(StripMiner* laser) const;
		std::string getName(void) const;
};

#endif
